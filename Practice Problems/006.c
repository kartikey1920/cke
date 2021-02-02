#include<stdio.h>
main(){
int array[100],i,n=10;
printf("Enter elements of array: \n");fflush(stdin);
for(i=0;i<n;i++)
{
    scanf("%d",&array[i]);
}
printf("Even numbers are: ");
for(i=0;i<n;i++)
{
    if(array[i]%2==0)
    {
        printf("%d ",array[i]);
    }
}
}
