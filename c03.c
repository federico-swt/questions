float *four_numbers()
{
    float x[4];
    int i = 0;

    x[++i] = 0.1;
    x[++i] = 2.3;
    x[++i] = 4.5;
    x[++i] = 6.7;

    return x;
}

int main()
{
    float *p = four_numbers();

    printf("%i\n", p[0]);
    printf("%i\n", p[1]);
    printf("%i\n", p[2]);
    printf("%i\n", p[3]);

    return 0;
}
