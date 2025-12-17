#include<stdio.h>
#include<math.h>
//celsius TO fahrenheit
void celFa(float x);
int main(){
    float x;
    printf("Enter Celsius Value : ");
    scanf("%f", &x);
    celFa(x);
    return 0;
}
void celFa(float x){
    x = x * 9/5 + 32;
    printf("Fahrenheit Value is : %f\n", x);
    
}