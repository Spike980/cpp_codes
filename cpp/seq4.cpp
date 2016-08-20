#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, x, s[200], q[200];

    cin >> n >> x;

    for(int i=0; i<n; i++)
        cin >> s[i];

    for(int i=0; i<n; i++)
        cin >> q[i];

    for(int i=0; i<n; i++)
    {
        for(int j=max(0,i-x); j<=min(n, i+x); j++)
        {
            if (s[i] == q[j])
            {
                cout << i+1 << ' ';
                j=min(n,i+x) + 1;
            }
        }
    }

    return 0;
}
