#include <stdio.h>
int main(){
    float radius,area;
    scanf("%f",&radius);

    area= 3.141*radius*radius;
    printf("Area: %.2f",area);
    
    return 0;
}