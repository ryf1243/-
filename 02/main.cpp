#include <stdio.h>
#include <string.h>
int main()
{
	char str[]="1+2+2+1+2+5+4-1-3+4-8";
	int a=str[0]-'0',b;
	for(int i=1;i<strlen(str);i++)
	{
		if(str[i]=='+')
		{
			b=str[i+1]-'0';
			a+=b;
			i++;
		}
		else if(str[i]=='-')
		{
			b=str[i+1]-'0';
			a-=b;
			i++;
		}
	}
	printf("%d\n",a);
} 