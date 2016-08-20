#include <cstdio>

using namespace std;

int main()
{
    int t, a, rem;
    long b;
    int pattern[10][4] = {{0, 0, 0, 0}, {1, 1, 1, 1}, {6, 2, 4, 8} , {1, 3, 9, 7} , {6, 4, 6, 4}, {5, 5, 5, 5}, {6, 6, 6, 6}, {1, 7, 9, 3}, {6, 8, 4, 2}, {1, 9, 1, 9}};

    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %ld", &a, &b);
        if(b == 0)
            printf("%d\n", 1);
        else
        {
            a=a%10;
            rem = b%4;
            printf("%d\n", pattern[a][rem]);
        }
    }
        
        

        

   return 0;
}
