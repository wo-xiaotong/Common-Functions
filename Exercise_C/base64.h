#ifndef BASE64_H
#define BASE64_H

#include <string.h>

/*	
	@usage:
	char *s="are you ok?";
	char en[strlen(s)/3*4+((strlen(s)%3==0)?1:5)];
	base64_encode(s,en);
	char de[strlen(s)+1];
	base64_decode(en,de);

	printf("%s\n %s\n",en,de);
*/

void base64_encode(char* str,char* encode)
{
	char en_table[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	unsigned int c;
	int len=strlen(str)/3;
	int index=0;
	while(len--){
		c=*str++;
		c=(c<<8)|(*str++);
		c=(c<<8)|(*str++);
		
		encode[index++]=en_table[(c&0x00FC0000)>>18];
		encode[index++]=en_table[(c&0x0003F000)>>12];
		encode[index++]=en_table[(c&0x00000FC0)>>6];
		encode[index++]=en_table[c&0x0000003F];
	}

	int gap=strlen(str)%3;
	if(gap==2){
		c=*str++;
		c=(c<<8)|(*str);
		encode[index++]=en_table[(c&0x0000FC00)>>10];
		encode[index++]=en_table[(c&0x000003F0)>>4];
		encode[index++]=en_table[(c&0x0000000F)<<2];
		encode[index++]='=';
	}
	else if(gap==1){
		c=*str;
		encode[index++]=en_table[(c&0x000000FC)>>2];
		encode[index++]=en_table[(c&0x00000003)<<4];
		encode[index++]='=';
		encode[index++]='=';
	}
	
	encode[index]='\0';
}

static inline unsigned char e2n(char c)
{
	char de_table[]="\x00\x1A\x34\x3E\x3F";
	if('A'<=c && c<='Z')return c-'A'+de_table[0];
	if('a'<=c && c<='z')return c-'a'+de_table[1];
	if('0'<=c && c<='9')return c-'0'+de_table[2];
	if(c=='+')return de_table[3];
	return de_table[4];
}

void base64_decode(char* str,char* decode)
{
	char *origal=str;
	int len=strlen(str);
	int cnt=len/4;
	int flag=0;
	if(str[len-1]=='='){
		flag=1;
		--cnt;
	}
	unsigned int r; 
	int index=0;
	while(cnt--){
		r=e2n(*str++);
		r=(r<<6)|e2n(*str++);
		r=(r<<6)|e2n(*str++);
		r=(r<<6)|e2n(*str++);

		decode[index++]=(r&0x00FF0000)>>16;
		decode[index++]=(r&0x0000FF00)>>8;
		decode[index++]=(r&0x000000FF);
	}
	
	if(flag==1){
		if(origal[len-2]=='=' && origal[len-1]=='='){
			r=(e2n(origal[len-4])<<2)|(e2n(origal[len-3])>>4);
			decode[index++]=(r&0x000000FF);
		}
		else {
			r=e2n(origal[len-4]);
			r=(r<<6)|e2n(origal[len-3]);
			r=(r<<4)|(e2n(origal[len-2])>>2);
			decode[index++]=(r&0x0000FF00)>>8;
			decode[index++]=(r&0x000000FF);
		}
	}

	decode[index]='\0';
}

#endif
