#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) 
{
	FILE *fp;
	if((fp=fopen(argv[2],"r"))==NULL)
	{
		printf("No File\n");
	}
	else
	{
		int w_cnt=1,c_cnt=0; 
		while(!feof(fp))
		{
			char c;
			fread(&c,sizeof(c),1,fp);
			{
				if(c==' '||c==',')
				{
					 
					w_cnt++;
				}
				else 
					c_cnt++;
			}
		}
		if((strcmp(argv[1],"-w"))==0)  printf("单词数为：%d\n",w_cnt);
		else if((strcmp(argv[1],"-c"))==0)  printf("字母数为：%d\n",c_cnt);
	}
	fclose(fp);
	return 0;
}
