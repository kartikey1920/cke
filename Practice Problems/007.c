#include<stdio.h>
main(){
int n, i;
printf("Enter numbers:\n");
while(1)
{
    scanf("%d",&n);
    while(n==0)
    {
        end();
    }
    if(n%2==0)
    {
        printf("%d is even\n",n);
    }
    else if(n%2!=0)
    {
        printf("%d is odd\n",n);
    }
}
return 0;
}
