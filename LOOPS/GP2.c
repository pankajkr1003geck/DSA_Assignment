#include<stdio.h>
int main(){
    int n,a=3;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
         {
            printf("%d ",a);
            a = a * 4;
         }
    return 0;
}