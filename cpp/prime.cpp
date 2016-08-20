#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    unsigned long m, n;
    
    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> m;
        cin >> n;

        if (m%2 == 0)
        {
            if(m == 2)
                cout << m << '\n';
            m = m+1;
        }

        for(unsigned long j=m; j<=n; j+=2)
        {
            char ch ='y';
            if(j==1)
            {
                cout << j+1 << '\n';
                continue;
            }
                
            for(unsigned long k=3; k<=sqrt(j); k++)
            {
                if(j%k == 0)
                {
                    k=j-1;
                    ch='n';
                }
            }
            if(ch=='y')
                cout << j << '\n';
        }
    }

    return 0;
}
