#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,p;
    for(m=0;m<3;m++){

        for(n=0;n<3;n++){

            for(p=0;p<3;p++){

                if(m+n+p == 2){
                    goto print;
                }
            }
        }
    }
    print:
    printf("m :%d n:%d p:%d \n",m,n,p);
}
