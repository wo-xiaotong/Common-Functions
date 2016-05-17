#ifndef BASE64_H
#define BASE64_H

#include <string.h>

inline char encode_to_char(unsigned char r)
{
	if(0<=r && r<26)return r+'A';
	if(26<=r && r<52)return r-26+'a';
	if(52<=r && r<62)return r-52+'0';
	if(r==62)return '+';
	return '/';
}

void base64_encode(char* str,char* encode)
{
	unsigned char c1,c2,c3;
	unsigned char r1,r2,r3,r4;
	int len=strlen(str)/3;
	int index=0;
	while(len--){
		c1=*str++;
		c2=*str++;
		c3=*str++;
		
		encode[index++]=encode_to_char((c1&0xFC)>>2);
		encode[index++]=encode_to_char(((c1&0x03)<<4)|((c2&0xF0)>>4));
		encode[index++]=encode_to_char(((c2&0x0F)<<2)|((c3&0xC0)>>6));
		encode[index++]=encode_to_char(c3&0x3F);
	}

	int gap=strlen(str)%3;
	if(gap==2){
		c1=*str++;
		c2=*str;
		encode[index++]=encode_to_char((c1&0xFC)>>2);
		encode[index++]=encode_to_char(((c1&0x03)<<4)|((c2&0xF0)>>4));
		encode[index++]=encode_to_char(((c2&0x0F)<<2));
		encode[index++]='=';
	}
	else if(gap==1){
		c1=*str;
		encode[index++]=encode_to_char((c1&0xFC)>>2);
		encode[index++]=encode_to_char(((c1&0x03)<<4));
		encode[index++]='=';
		encode[index++]='=';
	}
	
	encode[index]='\0';
}

void base64_decode(char* str,char* decode)
{
	
}
#endif
