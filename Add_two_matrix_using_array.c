#include<stdio.h>
int main()
{
    int m=0,n=0,c=0,d=0,first[10][10],Second[10][10],sum[10][10];
    printf("Enter The No of Row And Column of Matrix\n");
    scanf("%d %d", &m, &n);
    printf("Enter The Elements of First Matrix\n");
    for ( c = 0; c < m; c++)
    {
        for ( d = 0; d < n; d++)
        {
            scanf("\t %d",&first[c][d]);
        }
        
        printf("\n");
    }
    printf("Enter The Elements of Secound Matrix\n");
    for ( c = 0; c < m; c++)
    {
        for ( d = 0; d < n; d++)
        {
            scanf("\t %d",&Second[c][d]);

        }
        printf("\n");
    }
    printf("Sum Of Two Matrix\n");
    for ( c = 0; c < m; c++)
    {
        for ( d = 0; d < n; d++)
        {
            sum[c][d]=first[c][d]+Second[c][d];
        }
        
    }
    
    // printf("%d \n ",sum[c][d]);
    for ( c = 0; c < m; c++)
    {
        for ( d = 0; d < n; d++)
        {
            printf("\t %d",sum[c][d]);
        }
        printf("\n");

    }
    
    
    

}