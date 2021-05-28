#include <stdio.h>
int main() 
{
    char c;
    int alpha ;
    printf("enter an alphabet to check:");
     scanf("%c" ,&c );
     alpha = ( c== 'a' ||c =='i' || c== 'o' ||c== 'e' || c== 'u') ;
     if (alpha)
       printf(" %c is a vowel .",c);
       else
       printf( "%c is a consonant", c);
    return 0;
}