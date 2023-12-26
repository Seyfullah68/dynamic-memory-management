#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i,n=5;
    ptr=(int *)calloc(n,sizeof(int));
    for(i=0;i<5;i++)
    {
        *ptr=i+1;
        ptr++;
    }
    ptr=ptr-n;
    for(i=0;i<5;i++)
    {
        printf("%d  ",*ptr);
        ptr++;
    }
    free(ptr);
    return 0;
}
