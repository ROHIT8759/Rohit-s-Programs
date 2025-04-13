#include<stdio.h>

int main () {
    int a;
    printf("Enter Marks");
    scanf("%d", &a);
    switch (a>=90)
    {
    case 1: printf("outstading");
        break;
    
    default:{
        switch (a>=70)
        {
        case 1:
            printf("execelent");
            break;
        
        default: {
            switch (a>=50)
            {
            case 1:
                printf("avg");
                break;
            
            default:{
                switch (a>=0)
                {
                case 1:
                    printf("fail");
                    break;
                
                default: printf("unvalide");
                    break;
                }
            }
                break;
            }
        }
            break;
        }
    }
    
    }
}
