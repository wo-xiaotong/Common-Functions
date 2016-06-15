#include<stdio.h>
#include<string.h>
#include<sys/stat.h>
#include<dirent.h>
#include<stdlib.h>

void printdir(char* dir,int depth)
{
	DIR* dp=opendir(dir);
	if(dp==NULL){
		printf("cannot open %s\n",dir);
		return ;
	}

	chdir(dir);
	struct dirent* entry;
	while((entry=readdir(dp))!=NULL){
		struct stat statbuf;
		lstat(entry->d_name,&statbuf);
		if(S_ISDIR(statbuf.st_mode)){
			if(strcmp(".",entry->d_name)==0 || strcmp("..",entry->d_name)==0)continue;
			printf("%*s%s/\n",depth," ",entry->d_name);
			printdir(entry->d_name,depth+4);
		}
		else printf("%*s%s\n",depth," ",entry->d_name);
	}
	chdir("..");
	closedir(dp);
}


int main(int argc,char* argv[])
{
	char* topdir=".";
	if(argc>=2)topdir=argv[1];

	printdir(topdir,0);

	return 0;
}
