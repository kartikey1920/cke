#include<stdio.h>
main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
(n & 0x01)?printf("%d is an odd number", n):printf("%d is an even number", n);
return 0;
}
