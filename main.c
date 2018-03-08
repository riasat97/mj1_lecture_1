#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{

    float x[N],sum=0;
    int i;
    printf("enter %d real numbers \n",N);
    for(i=0;i<N;i++){
        scanf("%f",&x[i]);
        sum+=x[i]*x[i];
    }
    printf("\n");
    for(i=0;i<N;i++){
        printf("X[%2d] = %2.2f \n",i+1,x[i]);
    }
    printf("Total of %d real numbers = %.2f \n",N,sum);

    return 0;

}

/*
*/
