//write a program to write all the odd numbers from 1 to n in a file.
#include<stdio.h>
int main(){

    FILE *fptr;
    fptr = fopen("odd.txt", "w");
 
    int n;
    printf("enter a number : ");
    scanf("%d", &n);

    int count = 1;
    for(int i = 1; i<=n; i++){
        if(i % 2 != 0){
            fprintf(fptr, "%d\t", i);

        }
    }

    fclose(fptr);
    return 0;
}