#include<stdio.h>
#include<math.h>
void square(int);
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    square(n);
    return 0;
}
void square(int x){
    printf("%d\n",x * x);
}