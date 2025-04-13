# include<stdio.h>
int main () {
    int a, b, c;
    printf("Enter A:-");
    scanf("%d", &a);

    printf("Enter B:-");
    scanf("%d", &b);

    printf("Enter C:-");
    scanf("%d", &c);

    printf("average is:-");
    printf("%d", (a + b + c) / 3);
    return 0;
}