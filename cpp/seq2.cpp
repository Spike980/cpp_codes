#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, s[200], q[200], res[400], j=0, k, key;
    cin >> n;
    
    for(int i=0; i<n; i++)
     {
         cin >> s[i];
     }

     cin >> m;

     for(int i=0; i<m; i++)
     {
         cin >> q[i];
     }

     for(int i=0; i<min(m, n); i++)
     {
         if(s[i] != q[i])
         {
             res[j] = s[i];
             j++;
             res[j] = q[i];
             j++;
         }
     }
     if(m > n)
     {
         for(int i=n; i<m; i++)
         {
             res[j] = q[i];
             j++;
         }
     }
     
     if (n > m)
     {
         for (int i=m; i<n; i++)
         {
             res[j] = s[i];
             j++;
         }
     }


      for (int i=1; i<j; i++)
      {
          key = res[i];
          k=i-1;
          while (k>=0 && res[k] > key)
          {
              res[k+1] = res[k];
              k = k-1;
          }
          res[k+1] = key;
      }

      for (int i=0; i<j; i++)
          cout << res[i] << '\n';


    return 0;
}
