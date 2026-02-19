#include<stdio.h>
int main(){
         //To print : 100,97,94,91,......1;
         int a = 100;
         for(int i=1; a>0; i++)
         {
            printf("%d ",a);
            a = a - 3;
         }
    return 0;
}