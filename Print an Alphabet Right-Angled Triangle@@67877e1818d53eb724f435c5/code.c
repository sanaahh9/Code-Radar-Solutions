#include <stdio.h>
int main() {
    int i,j,n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        char ch = 'A';
        for(j = 1; j <= i; j++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}