#include <stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    if(test <= 100 && test >= 90)
        printf("A");
    else if(test < 90 && test >= 80)
        printf("B");
    else if(test < 80 && test >= 70)
        printf("C");
    else if(test < 70 && test >= 60)
        printf("D");
    else
        printf("F");
}