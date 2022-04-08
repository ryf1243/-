#include <stdio.h>
#include <string.h>
int main()
{
	char str[]="2*2/4*1/1*2*3/2";
	int a=str[0]-'0',b;
	for(int i=1;i<strlen(str);i++)
	{
		if(str[i]=='*')
		{
			b=str[i+1]-'0';
			a*=b;
			i++;
		}
		else if(str[i]=='/')
		{
			b=str[i+1]-'0';
			a/=b;
			i++;
		}
	}
	printf("%d\n",a);
} 