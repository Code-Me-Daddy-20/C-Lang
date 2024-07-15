#include <stdio.h>
//multiDimensional array
int main()
{
    int arr[2][3]={{1,2,3},{8,9,0}};
    printf("%d\n%d\n",arr[1][1],arr[0][2]);

    arr[0][1]=0;arr[1][2]=10;
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

