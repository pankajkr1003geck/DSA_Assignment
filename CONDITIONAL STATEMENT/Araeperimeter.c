#include<stdio.h>
int main(){
    int l,b;
    printf("Enter the length:");
    scanf("%d",&l);
    printf("Enter the breadth:");
    scanf("%d",&b);
    int area,perimeter;
    area = l*b;
    perimeter = 2*(l+b);
    if(area>perimeter){
        printf("Area is greater than perimeter:");
    }
    else
   {
    printf("Area is smaller than perimeter:");
   }
    return 0;
}