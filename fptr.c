#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("fileq.txt", "w");


    int n;
    printf("enter any number : ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        int count = 1;
        if(i % 2 == 0)
        fprintf(fptr, "%d\t",i);
    }


    fclose(fptr);

    return 0;
}