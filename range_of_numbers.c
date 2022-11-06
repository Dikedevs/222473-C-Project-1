#include <stdio.h>
#include<stdlib.h>

void main(){
    int i = 0;
    int lastNum;
    printf("Enter a number: ");
    scanf("%d", &lastNum);
    while (i <= lastNum)
    {
        printf("%d", i+1);
        printf(" ");
        i++;
    }
}