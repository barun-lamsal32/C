#include<stdio.h>
int main()
{
int i,j;
int mat1[3][2],mat2[3][2],sum[3][2];
printf("Enter elements of first matrix:\n ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("mat1[%d][%d]= ",i,j);
            scanf("%d",&mat1[i][j]);
        }
        }

        printf("Enter elements of second matrix:\n ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("mat2[%d][%d]= ",i,j);
            scanf("%d",&mat2[i][j]);
        }
}
printf("The sum of the matrix is:\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<2;j++)
            {
                sum[i][j]=mat1[i][j]+mat2[i][j];
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
        return 0;
}


