#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t, n, key1, key2, men[1001], women[1001];
    scanf("%d", &t);
    
    for(int i=0; i<t; i++)
    {
        int sum=0;
        scanf("%d", &n);
        for(int i=0; i<n; i++)
        {
            scanf("%d", &men[i]);
        }

        for(int i=0; i<n; i++)
        {
            scanf("%d", &women[i]);
        }   

        for(int j=1; j<n; j++)
        {
            key1 = men[j];
            int i=j-1;

            while(i>=0 && men[i] > key1)
            {
                men[i+1] = men[i];
                i -= 1;
            }

            men[i+1] = key1;
        }

        for(int j=1; j<n; j++)
        {
            key2 = women[j];
            int i=j-1;

            while(i>=0 && women[i] > key2)
            {
                women[i+1] = women[i];
                i -= 1;
            }

            women[i+1] = key2;
        }

        
        for(int j=0; j<n; j++)
        {
            sum += men[j] * women[j];
        }

        printf("%d\n", sum);

    }
   return 0;
}
