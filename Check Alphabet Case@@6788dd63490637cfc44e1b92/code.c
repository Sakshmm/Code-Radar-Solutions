 int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("Lowercase",ch);
    }
    else if(ch>='A' && ch<='Z'){
        printf("Uppercase",ch);
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
 }