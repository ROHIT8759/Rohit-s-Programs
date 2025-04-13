#include<stdio.h>
#include<math.h>
int main () {
    float a, b, c;
    printf("enter 3size of a triangle:-");
    scanf("%f %f %f", &a, &b, &c);
    float area;
    float s;
    s = (a + b +c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of a triangle that side size are:- %f", area);
    return 0;
}