/*��1��	ִ����c = 5/9 * (f-32)��c��ֵΪ���٣�0
��2��	ִ����scanf("%f", &r)��r��ֵΪ���٣�����5.5��ʵ��Ϊ5.36 
��3��	ִ����newint = p&0xff00|k>>8�� newint��ֵ�Ƕ��٣�-95���ʽk>>8��ֵ�Ƕ��٣�-95
*/
#include<stdio.h>
#define PI 3.14159    /*�궨���βû�зֺ�*/ 
int main( void )
{
   int newint;     /*����newint*/ 
   short p, k ;
   double c, r, s ,f;/*f������Ϊdouble*/

/* ����1 */
   printf("Input Fahrenheit: " ) ;
   scanf("%lf", &f ) ;     /*�Ӱٷֺţ��޸�Ϊlf*/ 
   c = 5.0/9 * (f-32) ;         /*5.0Ϊdouble����*/ 
   printf( " \n %d (F) = %.2f (C)\n\n ", f, c ) ;

/* ����2 */
printf("input the radius r:");
scanf("%lf", &r);    /*r������Ϊdouble*/ 
s = PI * r *r;
printf("\nThe acreage is %.2f\n\n",s); /*printfû��&*/ 

/* ����3 */
k = 0xa1b2, p = 0x8432;
newint = (p&0xff00)|((k&0xff00)>>8);//λ������� 
printf("new int = %#x\n\n",newint);  
return 0;
}

