#include <iostream>

using namespace std;

int main()
{
    int n, m, s[200], q[200], sum1=0, sum2=0;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> s[i];
    cin >> m;
    for(int i=0; i<m; i++)
        cin >> q[i];

    for(int i=0; i<n; i++)
        sum1 = sum1 + s[i];

    for(int i=0; i<m; i++)
        sum2 = sum2 + q[i];

    if ((sum1/n) > (sum2/m))
        for(int i=0; i<n; i++)
            cout << s[i] << ' ';
    else
        for(int i=0; i<m; i++)
            cout << q[i] << ' ';



    return 0;
}
