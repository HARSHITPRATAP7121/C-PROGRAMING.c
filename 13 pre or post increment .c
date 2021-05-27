#include <stdio.h>
int main()
{
    int a = 5,b = 15,c;
    printf("this program is of pre increament and post increment \n");
    c=++a;
    printf("c =  %d\n",c);
    c=a++;
    printf("c =  %d\n",c);
    c=--b;
    printf("c = %d\n",c);
    c=b--;
    printf("c = %d\n",c);
    return 0;
}