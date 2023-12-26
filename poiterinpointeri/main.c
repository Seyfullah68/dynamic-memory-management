#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **ptr=(int **)malloc(3*sizeof(int *));
    int i,j;
    for(i=0;i<3;i++)
    {
        ptr[i]=(int *)malloc(4*sizeof(int));
        for(j=0;j<4;j++)
        {
            ptr[i][j]=i*10+j+1;
            printf("%3d",ptr[i][j]);
        }
        printf("\n");
    }
    free(ptr);
    return 0;
}
