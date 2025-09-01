#include <stdio.h>
int main() {
    int i, j, m, n;
    printf("Enter Rows and Coloum: ");
    scanf("%d %d", &m, &n);
     int a[m][n];
    printf("the element are:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
        printf("the matrix is:>\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        return 0;
    
}