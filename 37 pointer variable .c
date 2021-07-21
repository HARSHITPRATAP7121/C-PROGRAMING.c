#include <stdio.h>
int main(){
    int a=20;
    int *b=&a;
    printf("%d\n", *b);
    printf("%d\n",b);
    
    return 0;
}