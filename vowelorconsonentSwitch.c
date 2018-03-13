#include <stdio.h>
//Write a C program to check vowel or consonant using switch-case
char* toLower(char ch) {

	if(ch>='A' && ch<='Z')return ch+32;
    if(ch>='a' && ch<='z') return ch;
    return 0;//will return null
}
int main(){
    char ch;
    printf("enter a character : \n");
    scanf("%c",&ch);
    char toLowerChar=toLower(ch);
    if(toLowerChar){
        switch(toLowerChar){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c is vowel\n",ch);
                break;
            default :
                printf("%c is consonant\n",ch);
                break;
        }
    }
    else
        printf("%c is not an alphabet \n",ch);
        return 0;
}

/*
*/
