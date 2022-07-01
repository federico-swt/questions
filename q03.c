int *three_numbers()
{
    int n[3] = { 0, 1, 2 };
    return n;
}

int main()
{
    int *p = three_numbers();

    printf("%i\n", p[0]);
    printf("%i\n", p[1]);
    printf("%i\n", p[2]);

    return 0;
}
