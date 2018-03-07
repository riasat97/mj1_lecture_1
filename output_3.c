#include <stdio.h>
#include <stdlib.h>

int call(int num){
    static int x=1,y;
     if(num>0){
        x=x+num;
        y=call(num-2)+call(num-3);
     }
     printf("Y:%d\n",y);
     return x;
}
int main()
{
    int num=5,x;
    x=call(num);
    printf("%d",x);

    return 0;
}
/*
x=1,num=5
x=5+1=6;

1.y=call(5-2=3) +   4.y=call(5-3=2)
x=6+3=9             x=10+2=12
2.y=call(3-2=1)     5.y=call(2-3=-1)
x=9+1=10              x=12
3.y=call(1-2=-1)
  x=10

  y=10          +     y=12      =22
*/
