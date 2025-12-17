#include<stdio.h>
int main(){
    // char firstName[50];
    // char lastName[50];
    // printf("Enter Your First Name :");
    // scanf("%s", firstName);
    // printf("Enter Your Last Name :");
    // scanf("%s", lastName);
    // printf("Your Full Name is %s %s\n", firstName, lastName);

    char str[100];
    fgets(str, 100, stdin);
    puts(str);
    return 0;
}