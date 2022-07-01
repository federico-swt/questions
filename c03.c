float *three_numbers()
{
    float n[3] = { 0.1, 2.3, 4.5 };
    return n;
}

int main()
{
    float *p = three_numbers();

    printf("%i\n", p[0]);
    printf("%i\n", p[1]);
    printf("%i\n", p[2]);

    return 0;
}
