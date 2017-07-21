int glob = 32;

int f(int x)
{
    if (x < 45)
        return x * x;
    else
        return 2 + x * x;
}

int g(int x)
{
    int i;
    int j = 0;
    for (i = 0; i < x; i++)
    {
        j += 2;
    }
    return j;
}

int h(int x)
{
    return x + glob;
}

int h2(int x)
{
    return h(x + 30);
}

int h3(int x)
{
    glob = 64;
    return 10;
}

int h4(int *x)
{
    *x = 30;
    return 20;
}

int main()
{
    f(30);
    f(40);
    f(50);
    f(0x10000000);
    g(20);
    h(24);
    h3(10);
    h(24);
    h2(30);
    int x;
    h4(&x);
}
