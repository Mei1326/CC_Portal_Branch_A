#include <stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i=i*2){
        printf("%d ",i);
        count++;
    }
    printf("\ncount= %d",count);
    return 0;
}