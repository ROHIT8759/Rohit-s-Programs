#include<STDIO.H>
int main () {
    int a;
    float b, c;
    printf("principal Amount:-");
    scanf("%d", &a);
    printf("Rate of Interest:-");
    scanf("%f", &b);
    printf("Who much years lone you want:-");
    scanf("%f", &c);

    float interest;
    interest = (a * b * c)/100;
    printf("\nrate of Interest %f", interest);
    return 0;
}