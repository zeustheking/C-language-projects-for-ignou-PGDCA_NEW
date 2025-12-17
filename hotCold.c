#include<stdio.h>
#include<math.h>
void checkTemp(int);
int main(){
    int x;
    printf("Enter Temperature : ");
    scanf("%d", &x);
    checkTemp(x);
    return 0;
}
void checkTemp(int x){
    for(int i=x; i<=x; i++){
        if(i <= 25)
        printf("cold\n");
        else printf("Hot\n");
    }
}