// sum of row and column
#include <stdio.h>
int main()
{
    int r, i, j, p, m = 0, n = 0, SOR = 0, SOC = 0;
    scanf("%d", &m);
    scanf("%d", &n);

    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter %d * %d element- ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int r = 0; r < m; r++)
    {
        for (int p = 0; p < n; p++)
        {
            SOR = arr[r][p] + SOR;
            SOC = arr[p][r] + SOC;
        }
        printf("Sum of Row- %d\n", SOR);
        printf("Sum Of Column- %d\n", SOC);
    }
}