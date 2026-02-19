#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    printf("Enter 3rd number:");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("%d is greatest",a);
        }
        else{ //a<c
            printf("%d is greatest",c);
        }
    }
    else{ //a<b
        if(b>c){
            printf("%d is greatest",b);
        }
        else{ //c>b
            printf("%d is greatest",c);
        }
    }
    return 0;
}
    