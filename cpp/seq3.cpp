#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
   int n, m, s[200], q[200];

   cin >> n;
   for(int i=0; i<n; i++)
       cin >> s[i];

   cin >> m;
   for(int i=0; i<m; i++)
       cin >> q[i];

    for(int i=0; i<min(m,n); i++)
    {
        if (s[i] == q[i])
            cout << i+1 << ' ';
    }

   return 0;
}
