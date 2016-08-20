#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t;
    unsigned long n, zeroes;

    
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%lu", &n);
        int j=1;
        int div= 9999;
        zeroes = 0;

        while(div != 0)
        {
            div = floor(n/pow(5, j));
            j++;
        }

        for(int k=1; k<j-1; k++)
        {
            zeroes += floor(n/pow(5, k));
        }
        printf("%lu\n", zeroes);
    }

    
    return 0;
}
