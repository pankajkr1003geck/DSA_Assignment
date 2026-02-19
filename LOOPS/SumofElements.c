#include<stdio.h>
int main(){
    int n,average,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    int arr[n];
    printf("array ");
    for(int i=0; i<n; i++){

      scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
      average = sum/n;{
        printf("%d",average);
        
    }
    for(int i=0; i<n; i++){

        if(average>arr[i]){

           sum=sum+arr[i];
        }
        printf("%d",sum);
        
    }
   return 0;
}