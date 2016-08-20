#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
   int n, m;
   char s1[100];
   string s3;
   vector<string> s2;

   cin >> n;
   for(int i=0; i<n; i++)
        cin >> s1[i];

   cin >> m;
   cin.ignore();
   for(int i=0; i<m; i++)
   {
       getline(cin, s3);
       s2.push_back(s3);
   }
    for(int i=0; i<m; i++)
    {
        string::iterator s = s2[i].begin();
        while ( s!=s2[i].end())
        {
            for(int k=0; k<n; k++)
            {
                if(*s == s1[k])
                {
                    *s = s1[(k+1)%n];
                    break;
                }
            }
          s++;
        }
    }
    for(int i=0; i<m; i++)
        cout << s2[i] << '\n';


   return 0;
}
