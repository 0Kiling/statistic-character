
#include<stdio.h>
#include<string.h>

int sum(char a[100],char b[100])
{
	int i,j,s=0;
	for(i=0;i<strlen(a);i++)
	{
		for(j=0;j<strlen(b);j++)
			if(a[i+j]!=b[j])
				break;
		if(j==strlen(b))
			s++;
	}
	return s;
}

void main()
{
	char a[200],b[200];
	printf("请输入一段话：\n");
	gets(a);
	printf("请输入需要查找的字符：\n");
	gets(b);
	strlwr(a);
	strlwr(b);
	printf("%d\n\n",sum(a,b));
}