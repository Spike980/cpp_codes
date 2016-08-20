#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    if (((a > 0) && (a < 200)) && ((b > 0) && (b < 200)))
    {
        c = a + b;
        cout << c;
    } else {
        cout << "Enter valid numbers\n";
    }

    return 0;
}
    
