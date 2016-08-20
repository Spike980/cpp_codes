#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int t;
    cin >> t;
    string name[t];

    for(int i=0; i<t; i++) 
    {
    cin >> name[i];
    }


    for(int i=0; i<t; i++) {
    for(int j=0; j < (name[i].length())/2; j+=2) {
        cout << name[i][j];
    }
        cout << "\n";
    }
	return 0;
}
