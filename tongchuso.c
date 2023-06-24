#include <stdio.h>
int tongchuso(int n)
{
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n = n / 10;
    }
    return s;
}
int main()
{
    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        while (n >= 10)
        {
            n = tongchuso(n);
        }
        printf("%d\n", n);
    }
}
