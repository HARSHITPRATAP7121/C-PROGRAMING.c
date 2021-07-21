#include<stdio.h>
int func1(int a);
void func2(int a);
int main(){
    int a;
    scanf("%d", &a);
     printf("\n");
    printf("%d is the number \n", a);
    func1(a);
    printf("\n");
    func2(a);
   printf("\n");
  return 0;
}
int func1(int a){
    printf("%d", a+5);
}

void func2(int a){
    printf("%d", a*5);
}