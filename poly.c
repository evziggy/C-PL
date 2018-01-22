
/**************************************************************************/
/* This program inputs a polynomial of degree 8 and then evaluates the polynomial at various values of x.
/* Coded by: Evense Zetrenne*/
/* For: Program Design
/**************************************************************************/
#include<math.h>
#include<stdio.h>

 /* Function Prototypes */
        void get_poly(double *coeff);
        double eval_poly(double *coeff, double x);

        int main(void) {
        
            double coeff;
            int degree = 8;
            double x;
            double answer;
            
            printf("Enter the eight coefficients:");
                scanf("%lf ", &coeff);
                
             printf("Enter x:");
                scanf("%lf", &x);
    
            answer = eval_poly(coeff, degree, x);
            printf("The answer is %f.\n", answer);
            return 0;
    }

void get_poly(double *coeff);
{
double *coeff
while(scanf("%lf", &coeff))
*coeff = *coeff + 1;


}

double eval_poly(double *coeff, double x){

double *coeff;
double answer;
int degree;
    
for(coeff = )
answer += *coeff*pow(x,degree);
return answer;
}