 #include <stdio.h>
 
 int main(void)
 {
    unsigned short X,m,n,result;
	
	scanf("%x %hu %hu" , &X,&m,&n);
	if((m>=0&&m<=15)&&(n>=1&&n<=16-m))
	{
		result=((X>>m)<<(15-n+1));
		printf("%x",result);
	}
	else printf("error\n");
     return 0;
 }











