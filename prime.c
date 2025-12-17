// 👉 Write a C program using a function to check whether a number is prime or not.
#include<stdio.h>
#include<math.h>
void primeCheck(int);
int main(){
    int i;
    printf("Enter a Number : ");
    scanf("%d",&i);
    primeCheck(i);
    return 0;

}
void primeCheck(int n){
    int count=0;
    for(int i=1; i<=n; i++){
    if(n % i == 0)
    count++;
    }
if(count == 2)
printf("prime\n");
else printf("not prime\n");
}