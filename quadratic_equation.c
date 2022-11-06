#include <stdio.h>
#include <math.h>

void main(){
    int a, b, c;
    float x1, x2;
    printf("a - ");
    scanf("%d", &a);
    printf("b - ");
    scanf("%d", &b);
    printf("c - ");
    scanf("%d", &c);
    x1 = (-b - sqrt(pow(b, 2) - 4*a*c))/ (2*a);
    x2 = (-b + sqrt(pow(b, 2) - 4*a*c))/ (2*a);

    printf("%lf and %lf are the roots of the equation", x1, x2);

}