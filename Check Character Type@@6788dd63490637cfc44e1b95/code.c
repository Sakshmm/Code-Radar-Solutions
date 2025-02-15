#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(Ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("Vowel");
    }
    else(ch=='d'||ch=='f'||ch="h"||ch=='k'||ch=='z'){
        printf("Consonant\n");
    }
    else if(ch>='0'&& ch<='9'){
        printf("Digit\n");
    }
    else{
        printf("special character");
    }
    return 0;

}