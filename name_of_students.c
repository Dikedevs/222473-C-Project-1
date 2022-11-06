#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int count = 0;
    int noOfStudents = 10;
    char allStudents[noOfStudents][24];
    while (count < noOfStudents)
    {
        printf("%d Student - ", count+1);
        scanf("%s", allStudents[count]);
        count++;
    }
    

    return 0;
}