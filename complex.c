/**************************************************************************/
/* Program computes the sum and difference of two complex numbers.  In the function,rrepresents the real component and i represents the imaginary component.
/* Coded by: Evense Zetrenne
/* For: Program Design
/**************************************************************************/

#include <stdio.h> 
 
void sum_diff(double *r3, double *i3, double *r4, double *i4); 

struct complex_num 
{

double r, i; 
};

int main() 
{

struct complex_num a, b, c, d; 

printf("Enter numbers for a and b where a + ib is the first complex numbers.\n ");
printf("a = " );
scanf("%lf", &a.r ); 

printf("b = " );
scanf("%lf", &a.i ); 

printf("Enter numbers for c and d where c + id is the second complex numbers.\n ");
printf("c = " );
scanf("%lf", &b.r );

printf("d = " );
scanf("%lf", &b.i ); 

c.r = a.r + b.r; 
c.i = a.i + b.i; 
d.r = a.r - b.r; 
d.i = a.i - b.i;

double *r3 = &c.r; 
double *i3 = &c.i;
double *r4 = &d.r; 
double *i4 = &d.i; 

if ( c.i >= 0 )
    printf("Sum of the first two complex numbers = %.3lf + %.3lfi\n ", *r3, *i3); 
else
    printf("Sum of the second two complex numbers = %.3lf %.3lfi\n ", *r3, *i3);

if (c.i <= 0 )
    printf("The difference of the first two complex numbers = %.3lf + %.3lfi\n ", *r4, *i4);
else
    printf("The difference of the second two complex numbers = %.3lf %.3lfi\n ", *r4, *i4);

return 0;
}
