#include <stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d", &n);
    for(i = 1; i <=n; i++){
        for(j = n; j <= n-1; j++){
            printf("* ");
        }
         printf("\n");
    }
   
}