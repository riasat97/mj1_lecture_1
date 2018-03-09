#include <stdio.h>
#include <stdlib.h>
#define Number 11
#define Group 11
int initiazlizeArray(int g[],int size){
    for(int i=0;i<size;i++){
        g[i]=0;
    }
    return g;
}
int main()
{

    float m[Number];
    int g[Group];
    int i,low,high;
    initiazlizeArray(g,Group);

    printf("Enter %d Marks:\n",Number);
    for(i=0;i<Number;i++){
        scanf("%f",&m[i]);
        ++g[(int)m[i]/10 ];
    }
    printf("\n");
    printf("Group\tRange\tFrequency\n");
    for(i=0,low=0;i<Group;i++,low=(low!=100)?low+10:100){
            if(i==10)high=100;
            else high=low+9;
        printf("%d\t%d-%d\t%d\n",i+1,low,high,g[i]);
    }


    return 0;

}

/*
*/
