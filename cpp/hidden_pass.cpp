#include <iostream>

using namespace std;

int main() 
{
    int t, n;
    char str1[100][6], str2[64];   
    char strng[64]; 
    cin >> t;


    for (int i=0; i<t; i++)
    {
        int x = 0;
        cin >> n;
        for (int j=0; j<n; j++)
        {
            cin >> str1[j];
        }
        cin >> str2;

        for (int j=0; j<n; j++)
        {
            int a[6], b[6], l=0;
            for (int k=0; k<6; k++)
            {
                a[l] = ((str1[j][k] >> k) & 1);
                b[l] = ((str1[j][k] >> ((k+3) % 6)) & 1);
                l++;
            }
            int base = 1, dec1=0, dec2=0;
            for (int m=0; m<6; m++)
            {
                dec1 = dec1 + a[m] * base;
                dec2 = dec2 + b[m] * base;
                base = base * 2;
            }
            strng[x] = str2[dec1];
            x++;
            strng[x] = str2[dec2];
            x++;
        }
        strng[x] = '\0';
        cout << strng << '\n';      
    }
    return 0;
}
                
