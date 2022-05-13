#include <stdio.h>

int countc(char *file) //返回文件的字符数 
{   FILE *f;
    f = fopen(file, "r");
    char a;
    int cchar=0;
    if(NULL==(f=fopen(file,"r")))
    {
        printf("file is NULL");
    }
    else
	{
		while (!feof(f)) 
		{ 
			a=fgetc(f); 
//			if (a != ' '&&a != '\n'&&a != '\t') 
				cchar++; 
		} 
		fclose(f);
		printf("charnum:%d ",cchar-1); 
	}
}


int countw(char *file)//返回文件词的数目 
{   FILE *f;
    f=fopen(file,"r");
    char ch;
	int cword=0,aword=0;
    if(NULL==(f=fopen(file,"r")))
    {
     printf("file is NULL");
    }
    else
	{
		while(!feof(f)) 
		{ 
			ch=fgetc(f);
			if((ch >= 'a'&&ch <= 'z')||(ch>='A'&&ch<='Z')||ch=='_') 
				aword=1; 
			else if (aword) 
			{
				 aword=0;cword++;
			} 
//			if(ch!=' '&&ch!=',')
//				aword=0;
//			else if(aword==0)
//			{
//				aword=1;cword++;
//			}
		} 
		fclose(f); 
		printf("wordnum:%d ",cword); 
	}
}


void main(int argc,char **argv )
{
	if(strcmp(argv[1],"-c")==0)
	{
		countc(argv[2]);
	}
	else if(strcmp(argv[1],"-w")==0)
	{
		countw(argv[2]);
	}
}




