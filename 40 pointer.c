#include <stdio.h>
int main () {

   int  abc , *mno, **xyz;

  abc = 5000;
  
   /* take the address of abc */
  mno = &abc;
  
   /* take the address of mno using address of operator & */
   xyz = &mno;
   /* take the value using xyz */
   printf("Value of abc = %d\n", abc );
   printf("Value available at *mno = %d\n", *mno );
   printf("Value available at **xyz = %d\n", **xyz);

   return 0;
}