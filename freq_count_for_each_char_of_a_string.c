#include <stdio.h>
//C program to count frequency of each character in a string
void frequencyCount(char*str,int*freq){
    char ch;
    for(int i=0;str[i];i++){
        ch=str[i];
        if(ch>='a'&& ch<='z')
        freq[ch-97]++;
        else if(ch>='A'&& ch<='Z')
        freq[ch-65]++;
    }
}
int main(){
    char str[50];
    int freq[26]={0};
    printf("write something...:\n");
    gets(str);
    frequencyCount(str,freq);
    printf("\nFrequency of each characters in %s :",str);
    for(int i=0;i<26;i++){
        if(freq[i]!=0)
        printf("\n%2c=%2d \n",97+i,freq[i]);
    }
    return 0;
}

/*
*/
