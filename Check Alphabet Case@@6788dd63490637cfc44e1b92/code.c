 #include<stdio.h>
 int main(){
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        printf("Uppercase");
    }
    else if(a>='A' && a<='B'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
 }