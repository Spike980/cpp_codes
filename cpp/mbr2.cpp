#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, n, a, b, c, d; 
    char ch;
    vector<int>::iterator pos;

    cin >> t;

    for (int i=0; i<t; i++)
    {
        vector<int> x, y;
        cin >> n;
        for (int j=0; j<n; j++)
        {
            cin >> ch;
            if(ch == 'p')
            {
                cin >> a >> b;
                x.push_back(a);
                y.push_back(b);
            }
            else if(ch == 'c')
            {
                cin >> a >> b >> c;
                x.push_back(a+c);
                y.push_back(b+c);
                x.push_back(a-c);
                y.push_back(b-c);
            }
            else if(ch == 'l')
            {
                cin >> a >> b >> c >> d;
                x.push_back(a);
                y.push_back(b);
                x.push_back(c);
                y.push_back(d);
            }
        }
            pos = min_element(x.begin(), x.end());
            cout << *pos << ' ';
            pos = min_element(y.begin(), y.end());
            cout << *pos << ' ';
            pos = max_element(x.begin(), x.end());
            cout << *pos << ' ';
            pos = max_element(y.begin(), y.end());
            cout << *pos << '\n';
    }
    return 0;
}
