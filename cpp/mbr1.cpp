#include <iostream>

using namespace std;

int main()
{
    int t, n, a, b, c, d; 
    char ch;

    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> n;
        int p=1000, q=1000, r=-1000, s=-1000;
        for(int j=0; j<n; j++)
        {

            cin >> ch;
        
                if(ch == 'p')
                {
                    cin >> a >> b;
                    if(p > a)
                        p = a;
                    if(r < a)
                        r = a;
                    if(q > b)
                        q = b;
                    if(s < b)
                        s = b;            
                }
                else if(ch == 'c')
                {
                    cin >> a >> b >> c;
                    if(p > (a-c))
                        p = a-c;
                    if(r < (a+c))
                        r = a+c;
                    if(q > (b-c))
                        q = b-c;
                    if(s < (b+c))
                        s = b+c;
                }
                else if(ch == 'l')
                {
                    cin >> a >> b >> c >> d;
                    if(p > a)
                        p=a;
                    if (p > c)
                        p=c;
                    if(q > b)
                        q=b;
                    if(q > d)
                        q=d;
                    if(r < a)
                        r=c;
                    if(r < d)
                        r=d;
                    if(s < b)
                        s=b;
                    if(s < d)
                        s=d;
                }
            }
            cout << p <<' '<< q <<' '<< r <<' '<< s;
    }
    return 0;
}
