// Pahade table
#include<stdio.h>
#include<math.h>
//calculate percentage students
int per(int a, int b, int c);
int main(){
    int result, s = 93, h = 40, e = 46;
    result = per(s, h, e);
    printf("Obtained percentage : %d", result);

    return 0;
}
int per(int a, int b, int c){
    int perValue = (a+b+c)/3;
    return perValue;
}