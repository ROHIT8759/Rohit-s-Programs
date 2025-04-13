#include<stdio.h>
int pirme(int num) {
    if(num<1){
        return 0;
    }
    for (int i=2;i*i<=num;++i)
        if(num%i==0){
            return 0;
        }
        printf ("%d", num);
    return 1;
}
// int fact(int num){
//     // for (int i = 2;i<=num/2;i++){
//     //     prime(num);
//     // }
// }
int main () {
    int num;
    printf("Enter the number");
    scanf("%d", &num);
    //fact(num);
    for (int i = 2;i<=num/2;i++){
        prime(num);
    }
}