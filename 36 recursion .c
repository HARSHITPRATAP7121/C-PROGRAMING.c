#include <stdio.h>
float recursion(int a){
    if(a<1){
        return 0;
    }
    int y = a + recursion(a/2);
    return y;
}
int main(){
    int a;
    scanf("%d", &a);
    
    printf("%f", recursion(a));
    
    return 0;
}