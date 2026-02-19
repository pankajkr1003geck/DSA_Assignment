#include<stdio.h>
int main(){
    int n,m;
    printf("Enter a number of rows:");
    scanf("%d",&n);
    printf("Enter a number of columns:");
    scanf("%d",&m);
    for(int i=1; i<=n; i++){  // outer loop ==> number of lines.
        for(int i=1;i<=m; i++){  //Inner loop ==> number of stars in each line.
            printf("*");
        }
        printf("\n");  // har line ke baad ek enter marne ke liye hai.
    }
    return 0;
}