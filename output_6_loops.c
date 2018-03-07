#include <stdio.h>
#include <stdlib.h>

int main()
{
    loop6();
    loop5();
    loop4();
    loop3();
    loop1();
    loop2();

    return 0;
}
void loop6(){
    border();
    int m=1;
    for(;scanf("%d",&m)!=0;)
        //scanf() returns no. of input read || if you input char instead of int,it will return 0 as invalid
        //input char to break out of loop as condition is set to give integer value
        printf("%d",m);
}
void loop5(){
    //sample output -4,-2,0,2,4
    border();
    for(int i=-4;i<=4;i+=2){
        printf("%d\n",i);
    }
    border();
    //sample output -10,-12,-14...-42
    for(int i=-10;i>=-42;i-=2){
        printf("%d\n",i);
    }
}
void loop4(){
    //Code for Program to print 'Power of 2' table using for loop in C Programming
    int i,n=5,p;
     border();
    for(i=0;i<=n;i++){
        if(i==0)p=1;
        else p*=2;
        printf("%d\n",p);
    }
    //Code for Program to print 'Power of 3' table using for while loop in C Programming
    border();
    i=0,p;
    while(i<=n){
        if(i==0)p=1;
        else p*=3;
        printf("%d\n",p);//n=5 i=1,n=4 i=2,n=3 i=4,n=2 i=8,n=1 i=16
        i++;
    }
}
void loop3(){
    int m=10,n=7;
     border();
    while(m%n>0){

        printf("%d \n",m);
        m+=1;
        n+=2;
    }
}
void loop2(){
    float i=0;
     border();
    for(i=0;i<=5;i+=(float)2/3){
        printf("%.2f\n",i);
    }
/*if there is no type cast (float) before 2/3,it will always be zero
  which will lead to infinite loop
*/
}


void loop1(){
  int i=1;
  border();
    do{
        i+=2 ;
        printf("%d\n",i);
      }
      while(i<10);

    return 0;
/*1+2=3 3<10
3+2=5 5<10
5+2=7 7<10
7+2=9 9<10
9+2=11 11<10 false
*/
}

void border(){
     printf("------------\n\n\n");
}

