#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int *res = (int *)malloc(sizeof(int)* 999);
    if(!res)
        return(NULL);
    while(start < end)
    {
        res[i] = end;
        end--;
        i++;
    }
    while(start > end)
    {
        res[i] = end;
        end++;
        i++;
    }
    res[i] = start;
    return(res);
}
