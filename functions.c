// 👉 Write a C program using a function to find the square of a number.
#include<stdio.h>
#include<math.h>

int squar(int num);
int main(){

    int n, result;
    printf("enter a number for square : ");
    scanf("%d", &n);
    result = squar(n);
    printf("squar is = %d\n", result);
    return 0;
}int squar(int num){
    int squareNum = num * num;
    return squareNum;
}
