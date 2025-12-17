#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];  
    int len, i;
    printf("enter any word : ");
    scanf("%s",str1);
    strcpy(str2,str1);
    len = strlen(str1);
    for(i=0; i<len; i++){
        str2[i]=str1[len - i - 1];
    }
    str2[i]='\0';

    if(strcmp(str2,str1)==0)
        printf("The string is a palindrome.\n");
    else
        printf("Not a palindrome.");

    return 0;
}
