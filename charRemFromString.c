#include <stdio.h>
#include <stdlib.h>
#define Size 20
//write a method which will remove any given character from a string ?

int getLength(char str[Size]) {

	int i, length = 0;
	for (int i = 0; str[i] != '\0'; i++)
		length++;

	return length;
}
void removeCharFromString(char ch,char str[Size]){
     int len,i;
     len=getLength(str);

     for(i=0;i<len;i++){
        if(str[i] == ch){
            for(int j=i;j<len;j++){
                str[j]=str[j+1];
            }
            len--;
            i--;
        }
     }
     str[i]='\0';
     printf("%s",str);
}
void removeCharFromStringUsingTemp(char ch,char *str){
    char temp[Size];
    int len=strlen(str),j=0;
    for(int i=0;i<len;i++){
        if(str[i]!=ch){
            temp[j++]=str[i];
        }
    }
    temp[j]='\0';
    printf("%s",temp);
}
void removeDuplicateCharFromString(char ch,char *str){//remove duplicate means only unique
    int len=strlen(str);
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(str[i]==str[j]){
                for(int k=j;k<len;k++){
                    str[k]=str[k+1];
                }
                len--;
                j--;
            }
        }
    }
    str[strlen(str)]='\0';
    printf("%s",str);
}
int main(){
    char str[Size],ch;
    printf("write a sentence :\n");
    gets(str);
    printf("Enter a character to remove :\n");
    scanf(" %c",&ch);
    removeCharFromStringUsingTemp(ch,str);

    return 0;

}

/*
*/
