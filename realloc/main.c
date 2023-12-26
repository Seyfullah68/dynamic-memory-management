#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i,n=5;
    ptr=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        ptr[i]=i+1;
    }
    printf("sayilar:\n");
    for(i=0;i<n;i++)
    {
        printf("%d, ",ptr[i]);
    }
    n=10;
    ptr=realloc(ptr,n*sizeof(int));
    printf("\n yeni sayilar :\n");
    for(i=5;i<n;i++)
    {
        ptr[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d, ",ptr[i]);
    }
    free(ptr);
    return 0;
}
