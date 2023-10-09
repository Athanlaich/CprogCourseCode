#include <math.h>    
#include <stdio.h>

int main()
{    
   
    long i,x,y;/*添加i的定义*/    
	for(i=1;i<100000;i++)  
	{        
	    x=sqrt(i+100);      
	   
	    y=sqrt(i+268);        
	
		if(x*x==i+100&&y*y==i+268) /*if的条件应该修改*/           
	
		printf("\n%d",i);    

	}    
	    return 0;
}
