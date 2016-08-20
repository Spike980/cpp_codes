#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int t, x1, y1, r1, x2, y2, r2, distance;
    cin >> t;

    for (int i=0; i<t; i++) 
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        distance = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
        
        if ((pow((x1-x2),2) + pow((y1-y2),2)) == pow(r1-r2, 2))
        {
            if(distance == 0)
                cout << "O" << '\n';
            else 
                cout << "E" << '\n';
        }

        else if ((pow((x1-x2),2) + pow((y1-y2),2)) < pow(r1-r2, 2))
        {
            cout << "I" << '\n';
        }

        else
            cout << "O" << '\n';
    }
    return 0;
}

