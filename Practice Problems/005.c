#include<stdio.h>
main(){
int n, m, i;
printf("Enter range: ");fflush(stdin);
scanf("%d\n", &n);scanf("%d", &m);
printf("All even integers in given range: ");
for(i=n;i<=m;i++)
{
    if(i%2==0)
    {
        printf("%d ",i);
    }
}
return 0;
}
