#include<stdio.h>
main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
switch(n%2)
    {
    case 0: printf("%d is an even number", n);break;
    default: printf("%d is an odd number", n);break;
    }
}
