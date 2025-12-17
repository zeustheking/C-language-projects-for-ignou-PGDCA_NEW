#include<stdio.h>
#include<string.h>

struct adrs{
    int house;
    int block;
    char city[100];
    char state[100];
};
void printadrs(struct adrs ads);
int main(){
    struct adrs ads[5];
    printf("enter house no, block, city, state : \n");
    scanf("%d", &ads[0].house);
    scanf("%d", &ads[0].block);
    scanf("%s", ads[0].city);
    scanf("%s", ads[0].state);
    printadrs(ads[0]);
    return 0;
}
void printadrs(struct adrs ads){
    printf("full address : %d %d %s %s\n", ads.house, ads.block, ads.city, ads.state);
}
