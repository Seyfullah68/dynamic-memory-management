#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *x[10]={"naber","leo","apa"};
    for(int i=0;i<3;i++)
    {
        printf("%s\n",x[i]);
    }
    return 0;
}
