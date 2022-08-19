# include<stdio.h>
# include<math.h>
int main( )
{
    int a[10][10], b[10][10], c[10][10];
    int m,n,l,o,i,j,k;
    printf("\n Enter Order of A matrix :");
    scanf("%d %d", &m, &n);
    printf("\n Enter order of B matrix:");
    scanf("%d %d", &o, &l);
    if(n==o)
    {
        printf("Enter A matrix \n");
        for(i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d", &a[i][j]);
            }    
        }
        printf("Enter B matrix \n");
        for(i=0;i<n;i++)
        {
            for (j=0;j<l;j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for (j=0;j<l;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
        printf("\n Resultant matrix is \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<l;j++)
            printf("%d ",c[i][j]);
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication not possible :(");
    }
}