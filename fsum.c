#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("fsum.txt","r");

    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);
    fclose(fptr);

    fptr = fopen("fsum.txt", "w");
    int c = a+b;
    fprintf(fptr, "%d", c);
    fclose(fptr);


    return 0;
}