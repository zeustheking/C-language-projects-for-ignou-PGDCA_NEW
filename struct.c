#include<stdio.h>
#include<string.h>
typedef struct bankAccount{
    int acNumber;
    char acHolderName[100];
    char ifscCode[100];
} ba;
int main(){
    ba s1 ={12312312, "Bull", "djh7eb88"};
    ba *ptr = &s1;
    printf("ac details are %d %s %s\n",ptr->acNumber, ptr->acHolderName, ptr->ifscCode);
    return 0;
}