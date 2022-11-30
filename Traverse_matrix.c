#include<stdio.h>
int main()
{
    int a,b;
    printf("ENter the value of row and coloum : ");
    scanf("%d %d",&a,&b);
    int mat[a][b];
    printf("ENter the elements in the array :\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int mat1[b][a];
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("%d ",mat[j][i]);
        }printf("\n");
    }
    
}
