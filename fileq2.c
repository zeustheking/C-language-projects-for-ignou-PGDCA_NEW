//replace the data with number of vowels in the string.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("fileq.txt", "r");
    char read;
    fscanf(fptr, "%c", &read);
    
    fclose(fptr);
    return 0;
}