#include "feemCopy.h"

int main()
{
    	char fileName[] = "./../testTxt/apple.txt";
	printf("file path :%s\n",fileName);
    	FILE* fp = fopen(fileName,"r");
	if(fp == NULL)
	{
		printf("file read error!\n");
		return -1;
	}
    	char buf[1024];
    	fgets(buf,1024,fp);
    	printf("%s",buf);

    	return 0;
}
