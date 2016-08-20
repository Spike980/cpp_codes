#include <iostream>

using namespace std;

int main()
{
    int n, s[200];

    cin >> n;

    for(int i=1; i<=n; i++)
        cin >> s[i];
    if(n <= 2)
    {
        cout << "Yes";
    }
    else {
    int i=1;

    while(i<n && (s[i] > s[i+1]))
    {
            i++;
    }
    if(i == 1)
    {
        cout << "No";
        return 0;
    }
    i++;
    while(i<n && (s[i] < s[i+1]))
    {
        i++;
    }
    if (i==n)
        cout << "Yes";
    else
        cout << "No";
    }
    return 0;
}
