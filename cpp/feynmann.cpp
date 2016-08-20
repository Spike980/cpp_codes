#include <cstdio>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t != 0)
    {
        int res = (t*(t+1)*(2*t+1))/6;
        printf("%d\n", res);
        scanf("%d", &t);
    }

    return 0;
}
