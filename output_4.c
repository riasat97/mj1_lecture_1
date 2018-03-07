#include <stdio.h>
#include <stdlib.h>

int call(int num){
    static int x=1,y;
     if(num>0){
        x=x*num;
        y=call(num-2)+call(num-3);
     }
     printf("Y:%d\n",y);
     return x;
}
int main()
{
    int num=4,x;
    x=call(num);
    printf("X:%d",x);

    return 0;
}
/*
x=1,num=4
x=4*1=4;

1.y=call(4-2=2) +   3.y=call(4-3=1)
  x=4*2=8             x=8*1=8
2.y=call(2-2=0)     4.y=call(2-3=-2)
  x=8                 x=8


  y=8          +     y=8      =16
*/
