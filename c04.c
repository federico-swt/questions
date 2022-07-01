/*
    x:  x0  x1  x2  x3  x4  x5  x6  x7 ...
                |   |   |
                *   *   *
                |   |   |
    h:          h0  h1  h2
                |   |   |
                +___+___+
                        |
    y:  y0  y1  y2  y3  y4  y5  y6  y7 ...
*/
void apply(float *x, float *y, int size)
{
    float h[3] = { 1.0, 2.0, 4.0 };
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 3; j >= 0; j--)
        {
            y[i] += x[i - j] * h[j];
        }
        y[i] /= 7.0; // 7 = 1+2+4
    }
}

int main(void)
{
    float in[100];
    float out[100];

    apply(in, out, 100);
    
    return 0;
}
