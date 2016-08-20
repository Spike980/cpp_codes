#include <iostream>

using namespace std;

int main()
{
    int n, s[200], m, t[200];
    cin >> n;

    for(int i=0; i<n; i++)
        cin >> s[i];

    cin >> m;
    for(int i=0; i<m; i++)
        cin >> t[i];

    for(int i=0; i<n; i++)
    {
        char ch='y';
        for(int j=0; j<m; j++)
        {
            if(t[j] == s[i])
            {
                ch = 'n';
                j=m;
            }
            if(s[i] < t[j])
                j=m;

        }
        if (ch=='n')
            cout << s[i] << ' ';
    }

    return 0;
}
            
