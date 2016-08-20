#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int t;
    cin >> t;

    for (int i=0; i<t; i++) 
    {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        int res1 = (pow((x1-x2),2) + pow((y1-y2),2));
        

            if (res1 == pow((r1-r2), 2))
            {
                cout << "E\n";
            }



        else if ((((x1-r1) < (x2-r2)) && ((x1+r1) > (x2+r2)) && ((y1-r1) < (y2-r2)) && ((y1+r1) > (y2+r2))) ||
            (((x2-r2) < (x1-r1)) && ((x2+r2) > (x1+r1)) && ((y2-r2) < (y1-r1)) && (y2+r2) > (y1+r1)))
        {
            cout << "I\n";
        }

        else
            cout << "O\n";
    }
    return 0;
}
