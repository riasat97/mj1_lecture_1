#include <stdio.h>
#include <stdlib.h>

void fibo(int a,int b){
    static int sum=0;

    if(sum<100){
        printf("%d\n",sum);
        sum=a+b;
        a=b;
        b=sum;
        fibo(a,b);
    }

}

int main(){

    printf("fibonacci series from 1 to 100\n");
    printf("%d\n%d\n",0,1);
    fibo(0,1);



 return 0;

}

/*
*/
