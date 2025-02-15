#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c){
        printf("Equilateral");
    }
    else if(b==c){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
}