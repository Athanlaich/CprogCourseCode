#include<stdio.h>
#define A 0xff000000
#define B 0x00ff0000
#define C 0x0000ff00 
#define D 0x000000ff
int main()
{
	unsigned long  x;
	int a,b,c,d;
	
	while(c!=EOF)
	{
	scanf("%ul",&x);
    a=(x&A)>>24;
	b=(x&B)>>16;
	c=(x&C)>>8;
	d=(x&D);
	
	printf("%d.%d.%d.%d\n",a,b,c,d);
	c=getchar();
    }

	
	return 0;
 } 











