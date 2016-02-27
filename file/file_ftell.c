#include<stdio.h>
main(int argc, char** argv)
{
FILE *fp;
/*
/////////First method th find size of file/////
fp=fopen(argv[1],"a");
printf("size of file=%d",ftell(fp));
*/

/*
//////////second method////////////
fp=fopen(argv[1],"r");
while((fgetc(fp))!=EOF);
printf("size=%d",ftell(fp));
*/

//////////third method/////////////////
fp=fopen(argv[1],"r");
fseek(fp,0,SEEK_END);
printf("size=%d",ftell(fp));


}






