 #include <stdio.h>
 
 int main() 
 {
    char input=0;
    while((input=getchar())!=EOF)
    {
        if(input>='A'&&input<='Z')
    {
        input=input+32;
        putchar(input);
       
    }
    else 
    {
       
        putchar(input);
       
    }
    }
   printf("\n");
    return 0;
 }











