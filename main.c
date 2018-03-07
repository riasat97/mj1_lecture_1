#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=555,*ptr=&a,b;
    b=*ptr=777;
    *ptr-=2;

    printf("a:%d --b:%d b:%d ",a,--*&b,*(int*)&b);

    return 0;

}

/*
*/
