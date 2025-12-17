#include<stdio.h>
//print the valu of 'i' from its pointer to pointer
int main(){
    int i = 1000000;
    int *ii = &i;
    int **iii = &ii;
    printf("%d\n",**iii);

    return 0;
}