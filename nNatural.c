#include<stdio.h>
//Write a program to find the sum of first n natural 
//numbers using a for loop.
int sum(int n);
int main(){
    int n;
    printf("Enter a Natural number : ");
    scanf("%d", &n);
    printf("sum is %d", sum(n));
    return 0;
}   
int sum(int n){
    int sumN = 0;
    for(int i = 1; i<=n; i++){
        sumN = sumN + i;
    }
        return sumN;
}