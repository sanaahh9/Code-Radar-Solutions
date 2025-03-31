#include <stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d", &n);
    for(i = 1; i <=n; i++){
        for(j = n; j <= n-i; j++){
            printf("* ");
        }
         printf("\n");
    }
   
}