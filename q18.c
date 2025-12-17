#include<stdio.h>
int main(){
    //keep taking number from user untill user enter a number which is multiple of 7.
    int n;
    do
    {
    printf("enter a number : ");
    scanf("%d", &n);
    printf("%d\n", n);
    if(n % 7 == 0){
        break;
    }
    } while (1);
    printf("thanks\n");
return 0;
}