#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;

    char *p=(char*)0;//0
    int *q=(int*)0;//0
    float *r=(float*)0;//0
    double *s=0;//0

    printf("%d\n%d\n%d\n%d\n",p,q,r,s);

    a=(int)(p+1);//1
    b=(int)(q+1);//4
    c=(int)(r+1);//4
    d=(int)(s+1);//8

    printf("%d\n%d\n%d\n%d",a,b,c,d);

    return 0;

}

/*
*/
