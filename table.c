// Pahade table
#include<stdio.h>
#include<math.h>
int table(int n);
int main(){
    int x, result;
    printf("KONSA PAHADA CHAHIYE : ");
    scanf("%d",&x);
    result = table(x);
    printf("%d", result);

    return 0;
}
int table(int n){
    for(int i=1; i<=10; i++){
    printf("%d\n",i*n);
    }
    return 1;
}