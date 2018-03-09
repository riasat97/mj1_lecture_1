#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define Batsman 3
#define Format 3

typedef struct {
    char name[20];
}players;

players player1={"Tamim"};
players player2={"Sakib"};
players player3={"Musi"};

const char* playerName(int i){

    if(i==0) return player1.name;
    else if(i==1) return player2.name;
    else return player3.name;

}

const char* formatName(int i){
    static char* format[]={"ODI","T20","Test"};
    return format[i];

}

int main()
{

    int run[Batsman][Format],player_total[Batsman],format_total[Format],run_total=0;
    int i,j;
    printf("Enter runs of ODI,T20,test : \n\n");

    for( i=0;i<Batsman;i++){
        player_total[i]=0;
        for(int j=0;j<Format;j++){
            printf("Enter runs of %s of %s  :\n",formatName(j),playerName(i));
            scanf("%d",&run[i][j]);
            player_total[i]+=run[i][j];
        }
        run_total+=player_total[i];
    }

    for(j=0;j<Format;j++){
        format_total[j]=0;
        for(i=0;i<Batsman;i++){
            format_total[j]+=run[i][j];
        }
    }
    printf("\n\n");
    for(i=0;i<Batsman;i++){

        printf("Total runs of %s = %d\n",playerName(i),player_total[i]);
    }
    printf("\n\n");
     for(i=0;i<Format;i++){

        printf("Total runs of %s of all batsman = %d\n",formatName(i),format_total[i]);
    }
    printf("\n");
    printf("Total runs of all batsman = %d\n",run_total);


    return 0;

}

/*
*/
