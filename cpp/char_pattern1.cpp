#include <iostream>

using namespace std;

int main() 
{
    int t,l[100],c[100];
    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> l[i] >> c[i];
    }

    for(int i=0; i<t; i++) 
    {
        char ch = '.';
        for(int j=0; j < l[i]; j++)
        {
            for (int k=0; k<c[i]; k++)
            {
                if (ch == '.')
                    ch = '*';
                else
                    ch = '.';
                cout << ch;
            }
            if(c[i] % 2 == 0)
            {

                if (ch == '.')
                    ch = '*';
                else
                    ch = '.';
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
                
