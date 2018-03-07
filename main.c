#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<=10;i++){
        if(i==3)continue;
        if(i==5)break;
        printf("%d\n",i);
    }

    return 0;
}

