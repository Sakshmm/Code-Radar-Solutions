#include<stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    switch(day){
        case 1:printf("Monday");
            break;
        case 2:printf("Tuesdy");
            break;
        case 3:printf("Wednesady");
            break;
        case 4:printf("Thursday");
            break;
        case 5:printf("Friday");
            break;
        case 6:printf("Saturday");
            break;
        case 7:printf("Sunday");
            break;
        default:printf("Invalid");                            
    }
    return 0;
}