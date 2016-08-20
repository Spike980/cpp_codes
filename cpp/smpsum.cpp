#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int a, b, sum=0;
    cin >> a >> b;

    for (int i=a; i <=b; i++)
        sum += pow(i, 2);
    cout << sum << '\n';

    return 0;
}
