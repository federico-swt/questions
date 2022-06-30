#include <stdlib.h>

int main()
{
    float *v = (float*)malloc(1000);

    for (int i = 0; i < 1000; i++)
    {
        v[i] = i;
    }

    // some operations on 'v'
    
    return 0;
}
