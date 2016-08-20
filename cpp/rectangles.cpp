#include <cstdio>

using namespace std;

int main()
{
    int n, sum=0;
    scanf("%d", &n);
    for(int i=2; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            if( n >= i*j)
                sum++;
        }
    }
    printf("%d\n", sum+n);


    return 0;
}
