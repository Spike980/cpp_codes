#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
   int t, l[100], c[100], s[100];
   
   cin >> t; 
   
   for (int i=0; i<t; i++)
   {
       cin >> l[i] >> c[i] >> s[i];
   }
    
    for (int i=0; i<t; i++)
    {
        for(int j=0; j<(l[i]*s[i]*2); j++)
        {
            for(int k=0; k<(c[i]*s[i]*2); k++)
            {
                int x = floor(j/s[i]);
                int y = floor(k/s[i]);

                if (x % 2 == 0)
                {
                    if (y % 2 == 0)
                    {
                        if((j % s[i]) + (k % s[i]) == s[i]-1)
                            cout << '/';
                        else
                            cout << '.';
                    }
                    else
                    {
                        if((j % s[i]) == (k % s[i]))
                            cout << '\\';
                        else
                            cout << '.';
                    }
                }
                else
                {
                    if (y % 2 != 0)
                    {
                        if((j % s[i]) + (k % s[i]) == s[i]-1)
                            cout << '/';
                        else
                            cout << '.';
                    }
                    else
                    {
                        if((j % s[i]) == (k % s[i]))
                            cout << '\\';
                        else
                            cout << '.';
                    }
                }
            }
            cout << '\n';
        }
        cout << '\n';
    }


   return 0;
}
