#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
int decimal2binary(int n){
    int rem,binary=0,base=1;
    while(n){
        rem=n%2;
        binary+=base*rem;
        base*=10;
        n/=2;
    }
    return binary;
}
int bitDifference(int a,int b){
    int bitDif=0;
     while(a || b){
        if(a%10^b%10)bitDif++;
        a/=10;
        b/=10;
    }
    return bitDif;
}
int main (){
    int a=10,b=20;
    a=decimal2binary(a);// 1010
    b=decimal2binary(b);//10100
    printf("Number of Bit difference between %d and %d = %d",a,b,bitDifference(a,b));
}

