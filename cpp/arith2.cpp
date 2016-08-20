#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;
    char ch, c;
    scanf("%d", &t);
    while((c = getchar()) != '\n');
    for(int i=0; i<t; i++)
    {
        while((ch = getchar()) == '\n');
        int prev=ch-48;
        cout << prev <<  "here" << endl;
        char symbol = 'a';
        long long int res=prev;

    while((ch = getchar()) != '=')
    {
        if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            if (symbol == '+')
            {
                cout << res << endl << prev << endl;
                res += prev;
            }
            else if (symbol == '-')
            {
                res -= prev;
            }
            else if (symbol == '*')
            {
                res *= prev;
            }
            else if (symbol == '/')
            {
                res /= prev;
            }
            prev= -1;
            symbol = ch;
        }
        else {
            if (prev != -1 && (ch >=48 && ch <=57))
            {
                prev = prev * 10 + (ch-48);
                continue;
            }
            if (ch == ' ' || ch == '\n')
            {
                continue;
            }
            if( ch >= 48 && ch <= 57)
             {
                 prev = ch-48;
             }
        }
    }

            if (symbol == '+')
            {
                cout << res << endl << prev << endl;
                res += prev;
            }
            else if (symbol == '-')
            {
                res -= prev;
            }
            else if (symbol == '*')
            {
                res *= prev;
            }
            else if (symbol == '/')
            {
                res /= prev;
            }
    printf("%lld\n" , res);
}


    return 0;
}
