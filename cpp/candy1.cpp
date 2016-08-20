#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, a[10000];
    while((scanf("%d", &n) && n!=-1))
    {
        int avg=0, mov=0;
        for(int i=0; i<n; i++)
            scanf("%d", &a[i]);

        for(int i=0; i<n; i++)
        {
            avg += a[i];
        }
        if(avg%n != 0)
        {
            printf("%d\n", -1);
            continue;
        }

        avg = avg/n;
        for(int i=0; i<n; i++)
        {
            if (avg-a[i] > 0)
            {
                mov += (avg-a[i]);
            }
            else if(avg-a[i] < 0)
            {
                mov -= (avg-a[i]);
            }

        }
        mov /= 2;
        printf("%d\n", mov);
    }

    return 0;
}
