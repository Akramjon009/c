#include <stdio.h>
#include <stdlib.h>

void output_fibannacci( int f0, int f1, int fn, int count, int i )
{
    if(i < fn)
    {
        count = f0+f1;
        f0 = f1;
        output_fibannacci(f0, count, fn, 0, i+1);
        printf("%d ", f1);
        exit(0);
    }
}

int main()
{
    int f0, f1, fn, count = 0, i = 0;
    printf("3ta son kiriting: ");
    scanf("%d %d %d", &f0, &f1, &fn);

    output_fibannacci(f0, f1, fn, count, i);

    return 0;
}
