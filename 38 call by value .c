#include <stdio.h>
int funct(int a){
    int b=10;
    a=b;
    return a;
}
int main(){
    int a=5;
    printf("%d\n", funct(a));
    printf("%d\n", a);

    return 0;
}