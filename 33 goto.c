#include <stdio.h>  
int main()   
{  
  int a,i=1;   
  printf(" Put any number for print the table : ");   
  scanf("%d",&a);  
  table:   
  printf(" %d x %d = %d\n" , a,i, a * i);  
  i++;  
  if(i<=10)  
  goto table;    
}  