/*（1）	执行完c = 5/9 * (f-32)，c的值为多少？0
（2）	执行完scanf("%f", &r)，r的值为多少？输入5.5，实际为5.36 
（3）	执行完newint = p&0xff00|k>>8， newint的值是多少？-95表达式k>>8的值是多少？-95
*/
#include<stdio.h>
#define PI 3.14159    /*宏定义结尾没有分号*/ 
int main( void )
{
   int newint;     /*定义newint*/ 
   short p, k ;
   double c, r, s ,f;/*f的类型为double*/

/* 任务1 */
   printf("Input Fahrenheit: " ) ;
   scanf("%lf", &f ) ;     /*加百分号，修改为lf*/ 
   c = 5.0/9 * (f-32) ;         /*5.0为double类型*/ 
   printf( " \n %d (F) = %.2f (C)\n\n ", f, c ) ;

/* 任务2 */
printf("input the radius r:");
scanf("%lf", &r);    /*r的类型为double*/ 
s = PI * r *r;
printf("\nThe acreage is %.2f\n\n",s); /*printf没有&*/ 

/* 任务3 */
k = 0xa1b2, p = 0x8432;
newint = (p&0xff00)|((k&0xff00)>>8);//位运算错误 
printf("new int = %#x\n\n",newint);  
return 0;
}

