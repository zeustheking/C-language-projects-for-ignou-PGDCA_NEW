#include<stdio.h>
void findCube(int x);
int main(){
    int x;
    printf("Find Cube : ");
    scanf("%d", &x);
    findCube(x);
    return 0;

}
void findCube(int x){
    x = x * x * x;
    printf("%d\n",x);
}