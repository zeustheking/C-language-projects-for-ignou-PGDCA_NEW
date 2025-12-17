#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    char str2[100];
    int len, i, flag = 0;
    printf("enter any string : ");
    scanf("%s", str1);

    strcpy(str2,str1);
    len = strlen(str1);
    len = len - 1;

    for(i = 0; i <= len; i++){
        if(str1[i] != str2[len-i]){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("palindrom");
    }
    else{
        printf("not palindrom");
    }

   

return 0;
}