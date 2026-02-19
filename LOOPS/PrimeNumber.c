  // WAP to check if a number is prime or Not;

#include<stdio.h>
int main(){
    int n,a = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==1){
        printf("1 is neither prime nor coposite");
    }  
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            a = 1;
            break;
        }
    }
    if(a == 0)
    printf("The given number is prime");
  else
  printf("The given number is composite");
    
    return 0;
}