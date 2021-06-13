#include<stdio.h>
int main()
{
    int i,j,a,b;
    int m1[10][10],n1[10][10];
    printf("Enter the Row and Column of the matrix\n");
    scanf("%d%d",&a,&b);
    printf("Enter the Elements of matrix is\n");
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < b; j++)
        {
            scanf("%d",&m1[i][j]);
            
        }
    }

        printf("Before Transpose---> \n");

        for ( i = 0; i < a; i++)
            {
                for ( j = 0; j < b; j++)
                {
                    printf("%d\t",m1[i][j]);
                }
                printf("\n");
                  
            }

        printf("Transpose Of a Matrix is \n");
            for ( i = 0; i < a; i++)
            {
                for ( j = 0; j < b; j++)
                {
                    n1[i][j]=m1[j][i];
                    printf("%d\t",n1[i][j]);

                }
                printf("\n");
                  
            }
        
    
    
}