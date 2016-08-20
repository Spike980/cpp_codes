#include <iostream>

using namespace std;

int main() 
{
    int t, l, c;

    cin >> t;
    
    for (int i=0; i<t; i++)
    {
        cin >> l >> c;
        for(int j=0; j<l; j++)
        {
            for(int k=0; k<c; k++)
            {
                if(j==0 || j == l-1 || k==0 || k == c-1)
                    cout << '*';
                else
                    cout << '.';
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}
