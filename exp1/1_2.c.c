#include <stdio.h>
int main()
{    
     int c,numchar,numline;
     numchar=0;    
	 numline=0;    
	 
	 printf("�����������ı�����������Ctrl+z������\n");    
	
	 while((c=getchar())!=EOF)  /*�������ȼ���Ӧ�ü�����*/  
	 {        
	          numchar++;        
	          if(c=='\n')            
			  numline++;    
	}    
	printf("�ַ���:%d,",numchar++);    
	printf("����:%d\n",numline);   
    
	
	return 0;
}

