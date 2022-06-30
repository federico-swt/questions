#include <stdlib.h>

int *five_numbers()
{
    int n[5] = { 0, 1, 2, 3, 4 };
    return n;
}

int main()
{
    int *p = five_numbers();
    return 0;
}
