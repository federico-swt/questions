#include <stdlib.h>

int main()
{
    int *v = (int*)malloc(1000);

    // array initialization
    for (int i = 0; i < 1000; i++)
    {
        v[i] = i;
    }

    // some operations on 'v'
    
    return 0;
}
