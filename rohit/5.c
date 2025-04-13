//5. Input temperature in celsius and convert it to Fahrenheit.
#include<stdio.h>

int main () {
    float f,c;
    printf("Enter temperature in celsius-");
    scanf("%f", &c);

    f=(1.8*c)+32;
    printf("Enter convert in fahrenheit-%f", f);
}