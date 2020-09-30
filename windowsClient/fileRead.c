#include "feemCopy.h"

int main()
{
    char fileName[] = "D:\\CodeWork_main\\item\\FeemCopy\\testTxt\\apple.txt";
    FILE* fp = fopen(fileName,"r");
    char buf[1024];
    fputs(buf,1024,fp);
    printf("%s",buf);

    return 0;
}