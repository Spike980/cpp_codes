#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;
    char ch;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        long long int result=0, num=0;
        int marker = 0;
        char symbol = 'a';

        while((ch = getchar()) != '=')
        {
            if(ch >= 48 && ch <= 57)
            {
                if (marker != 1)
                {
                    result = result * 10 + (ch-48);
                }
                else
                {
                    num = num * 10 + (ch-48);
                }
            }
            else if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                if (symbol != 'a')
                {
                    if (symbol == '+')
                    {
                        result += num;
                        num = 0;
                    }
                    else if (symbol == '-')
                    {
                        result -= num;
                        num = 0;
                    }
                    else if (symbol == '*')
                    {
                        result *= num;
                        num = 0;
                    }
                    else if (symbol == '/')
                    {
                        result /= num;
                        num = 0;
                    }
                }
                symbol = ch;
                marker = 1;
            }

    }
    
                    if (symbol == '+')
                    {
                        result += num;
                        num = 0;
                    }
                    else if (symbol == '-')
                    {
                        result -= num;
                        num = 0;
                    }
                    else if (symbol == '*')
                    {
                        result *= num;
                        num = 0;
                    }
                    else if (symbol == '/')
                    {
                        result /= num;
                        num = 0;
                    }
                    
        cout << result << endl;
    }


    return 0;
}
