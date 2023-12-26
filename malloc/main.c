#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr,n,i;
    printf("sayi giriniz\n");
    scanf("%d",&n);
    ptr=(int *) malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        ptr[i]=i;

    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",ptr[i]);

    }
    free(ptr);

    return 0;
}
