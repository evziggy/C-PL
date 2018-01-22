/**************************************************************************/
/* Program to remove a comment starting with /* and ending with */ in a statement, which is entered by the user. 
/* Coded by: Evense Zetrenne
/* For: Program Design
/**************************************************************************/
#include <stdio.h>

void area_perimeter(double width, double length, double *area, 
double *perimeter);

int main(void){

double width, length, are, peri;

    printf("Enter the width of the rectangle: ");
if (scanf("%lf",&width) != 1) {
fputs("read error width\n", stderr);
return 1;

}

    printf("Enter the length of the rectangle: ");
if (scanf("%lf",&length) != 1) {
fputs("read error length\n", stderr);
return 1;

}

 area_perimeter(width, length, &are, &peri);

    printf("The area of the rectangle is: %f\n",are);
    printf("The perimeter of the rectangle is: %f\n",peri);

return 0;

} 

void area_perimeter(double width, double length, double *area, double *perimeter){

*area = length * width;

*perimeter = (length + width)*2;

}
