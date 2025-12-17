#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter Your Full Name : ");
    char fullName[100];
    fgets(fullName, 100, stdin);
    printf("%s",fullName);

    return 0;
    ;
}