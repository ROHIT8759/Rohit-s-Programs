/*11. Compute the telephone bill for Mr. X as per the call rates given below:
Rental = 250
1
st 100 calls @Rs. 0.2
Next 100 calls @ Rs. 0.3
Remaining calls @ Rs. 0.5*/

#include<stdio.h>
int main(){
    int call;
    float bill;
    printf("Enter number of call-");
    scanf("%d", &call);
    if(call<100){ 
        bill=250+(call*0.2);
        printf("%f", bill);
    }
    else if(call<200){ 
        bill=250+(100*0.2)+(call-100)*0.3;
        printf("%f", bill);
    } 
    else if (call<300){
        bill=250+(100*0.2)+(100*0.3)+(call-200)*0.5;
        printf("%f", bill);
        } 
    else {
        bill=250+(100*0.2)+(100*0.3)+(call-200)*0.5;
        printf("%f", bill);
    }
    
    
}