//write a program to read a string from a file & output to the user.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("fileq.txt", "r");
    char ch;

    ch = fgetc(fptr);
    while(ch !=EOF){
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    fclose(fptr);
    return 0;
}