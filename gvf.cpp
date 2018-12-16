#include<stdio.h>
int main(void)
{
	char a;
	int b,c,d,e;
	for(b = 0,c = 0,d = 0,e = 0;;)
	{
		scanf("%c",&a);
		if(a == '#')
		{
			break;
		}
		if( (a >= 'a')&&(a <= 'z')||(a >= 'A')&&(a <= 'Z'))
		{
			b+=1;
		}
		else if(a == ' ')
		{
			c+=1;
		}
		else if((a >= '1')&&(a <= '9'))
		{
			d+=1;
		}
		else
		{
			e+=1;
		}
	}
	printf("%d %d %d %d\n",b,c,d,e);
	return 0;
}
