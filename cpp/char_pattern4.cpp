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

for (int a=0; a <t; a++)
{
   for (int i=0; i < l[a]*(s[a]+1) + 1; i++)
   {
       for (int j=0; j < c[a]*(s[a]+1) + 1; j++)
       {
           if ((i % (s[a]+1) == 0) || (j % (s[a] +1) == 0))
               cout << '*';
           else
           {   
               int x = floor(i/(s[a] +1));
               int y = floor(j/(s[a] +1));
               if ( x % 2 == 0)
               {
                 char ch ='\\';
                 if ( y % 2 == 0)
                 {
                     if ( i % (s[a] + 1) == j % (s[a] + 1))
                         cout << ch;
                     else
                         cout << '.';
                 }
                 else 
                 {
                     ch = '/';
                     if(s[a] == 1)
                         cout << ch;
                     else if ((i % (s[a] + 1)) + (j % (s[a] + 1)) == (s[a] + 1))
                         cout << ch;
                     else 
                         cout << '.';
                 }
                 }
               else if ( x % 2 != 0)
               {
                 char ch ='/';
                 if ( y % 2 == 0)
                 {
                     if(s[a] == 1)
                         cout << ch;
                     else if ((i % (s[a] + 1)) + (j % (s[a] + 1)) == (s[a] + 1))
                         cout << ch;
                     else
                         cout << '.';
                 }
                 else 
                 {
                     ch = '\\';
                     if ( i % (s[a] + 1) == j % (s[a] + 1))
                         cout << ch;
                     else 
                         cout << '.';
                 }
                 }
       }
       }
       cout << '\n';
   }
   cout << '\n';
}

   return 0;
}
