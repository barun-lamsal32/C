#include<stdio.h>
int main()
{
int mat1[10][10],mat2[10][10],prod[10][10],i,j,k,m,n,p,q,sum=0;

printf("Enter order of matrix 1: ");
scanf("%d %d",&m,&n);

printf("Enter order of matrix 2: ");
scanf("%d %d",&p,&q);

if(n!=p)
{
    printf("The product of matrix is not possible.");
}

else{
    printf("Enter elements of first matrix:\n ");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("mat1[%d][%d]= ",i,j);
            scanf("%d",&mat1[i][j]);
        }
        }

        printf("Enter elements of second matrix:\n ");

    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("mat2[%d][%d]= ",i,j);
            scanf("%d",&mat2[i][j]);
        }
        }

        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                for(k=0;k<n;k++)
                {
                    sum+=mat1[i][k]*mat2[k][j];

                }
                prod[i][j]=sum;
                    sum=0;
            }
            }

    printf("The result matrix is:\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",prod[i][j]);
        }
        printf("\n");
        }

}
return 0;
}


