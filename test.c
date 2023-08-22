#include <stdio.h>
int main(){
  double d1 =0.1F;
  double d2 = 1.0/10;
  if(d1==d2){
    printf("hello world\n");
    printf("0.1=%.17f, 1/10=%.17f",d1,d2);
  }
  else{
    printf("goodbye world\n");
    printf("0.1=%.17f, 1/10=%.17f",d1,d2);
  }
}

2 +"2"; //22


2 - "2"; //0

0 == []; //true

0 == "0"; //true

"0" == []; //false

