#include <iostream>

using namespace std;

int main() 
{
    int t, l[100], c[100], h[100], w[100];

    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> l[i] >> c[i] >> h[i] >> w[i];
    }
    
    for(int i=0; i<t; i++)
    {
        for (int j=0; j<((h[i]+1)*l[i])+h[i]; j++)
        {
            for(int k=0; k<((w[i]+1)*c[i])+w[i]; k++)
            {
                if ((j % (h[i]+1) == h[i]) && (k % (w[i]+1) == w[i]))
                    cout << '+';
                else if(j % (h[i]+1) == h[i])
                    cout << '-';
                else if(k % (w[i]+1) == w[i])
                    cout << '|';
                else
                    cout << '.';
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}
