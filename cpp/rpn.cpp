#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        vector<char> symbols;
        string exp;

        cin >> exp;

        for (string::iterator it=exp.begin(); it != exp.end(); it++)
        {
            if (*it >= 'a' && *it <= 'z')
            {
                cout << *it;
            }
            else if(*it == '+' || *it == '-' || *it == '*' || *it == '/' || *it == '^')
            {
                    symbols.push_back(*it);
            }
            else if(*it == ')')
            {
                cout << symbols[symbols.size() -1];
                symbols.pop_back();
            }

        }
        cout << '\n';
    }
    
                 
    return 0;
}
