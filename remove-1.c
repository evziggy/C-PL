/**************************************************************************/
/* Program that findseitherthe largest orsmallest of the tennumbersas command-line arguments
/* Coded by: Evense Zetrenne
/* For: Program Design
/**************************************************************************/
#include<stdio.h>

void remove_comment(char *s1, char *s2);
int read_line(char *str, int n);


int main()
   {
   char s1[100], s2[100];
   printf("PLease enter the statement: ");
   scanf("%[^\n]s",s1);
   remove_comment(s1, s2);
   printf(s2);
return 0;
}


int read_line(char *s1, int n)
{
    int ch; int i = 100;
          while ((ch = getchar()) != '\n'){
            if (i < n){
            *s1++= ch;
      i++;
            }
          }
	*s1 = '\0';
return 0;
}

void remove_comment(char *s1, char *s2)
   {
   char flag = '0';
for(; *s1 != '\0';s1++){
       if(*s1 == '/' && *(s1+1) == '*') 
           flag = '1'; 
       if(*s1 == '*' && *(s1+1) == '/') 
           flag = '1'; 
        if(flag == '0') 
           *(s2++) = *(s1);

}

}
