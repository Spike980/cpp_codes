#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, i; 
    long long int n, candy, j;
    cin >> t;
    for(i=0; i<t; i++)
    {
        long long int sum=0;
        cin >> n;
        for(j=0; j<n; j++)
        {
            cin >> candy;
            sum = (sum + candy) % n;
        }

        if (sum == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
            

    return 0;
}
