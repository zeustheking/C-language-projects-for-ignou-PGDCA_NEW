#include<stdio.h>
#include<string.h>
typedef struct CollegeStudentsList{
    char name[100];
    int roll;
    int year;
    char batch[100];
}csl;
void student(struct CollegeStudentsList list);
int main(){
    csl s1 ={"jasim", 255701, 2025, "odl"};
    csl s2 ={0};
    printf("enter name");
    scanf("%s",s2.name);
    printf("enter roll no.");
    scanf("%d", &s2.roll);
    printf("enter year");
    scanf("%d", &s2.year);
    printf("enter batch");
    scanf("%s",s2.batch);
    student(s1);
    student(s2);

    return 0;
}
void student(struct CollegeStudentsList list){
    printf("%s %d %d %s\n", list.name, list.roll, list.year, list.batch);
}