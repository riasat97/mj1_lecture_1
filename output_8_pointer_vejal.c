#include <stdio.h>
#include <stdlib.h>

int main()
{
    long  double x;
    int a=555,*ptr;
    ptr=&a;
    int b=*ptr=777;

    printf("%d %d %d ",a,--*&b,*(int*)&b);


    return 0;

}

/*
*/
