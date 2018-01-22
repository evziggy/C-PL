/**************************************************************************/
/* This program finds either the largest or smallest of the ten numbers as command-line arguments.
/* Coded by: Evense Zetrenne
/* For: Program Design
/**************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *numbers[])

{

int i, temp=0, max=0, min=0;
    if (argc==1)
    {
    printf("Enter command line argument: ");
        scanf("%d", &numbers);
}
else
{
    if (!(strcmp(numbers[1],"-l")))
    {  
        max = atoi(numbers[2]);
        for (i=2;i<argc;i++)
        {
            temp = atoi(numbers[i]);
            if (max<temp)
                max = temp;
}
    printf("\nThe largest number is: %d\n",max);
}
else{
    if (!(strcmp(numbers[1],"-s")))
            {  
            min = atoi(numbers[2]);
        for (i=2;i<argc;i++)
            {
                temp = atoi(numbers[i]);
            if (min>temp)
                min = temp;
}
    printf("\nThe smallest number is: %d\n",min);
}
}
}
    return 0;
}