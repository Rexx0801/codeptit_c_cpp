#include<stdio.h>

int main()
{
    int cd, cr,i ,j;
    printf("nhap chieu dai :");
    scanf("%d", &cd);
    printf("nhap chieu rong :");
    scanf("%d", &cr);
    for(i=1;i<=cr;i++)
    {
        for(j=1;j<=cd;j++)
        printf("*");
        printf("\n");
    }
    return 0;
}