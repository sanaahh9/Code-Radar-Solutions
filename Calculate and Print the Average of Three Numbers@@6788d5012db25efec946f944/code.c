#include <stdio.h>
int main() {
int a,b,c;
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
float d = (a+b+c) / 3.0;
printf("Average: %.2f", d);
return 0;
}