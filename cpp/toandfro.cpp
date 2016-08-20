#include<iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string str;
    int n;
    while ((scanf("%d", &n)) && n!=0) 
    {
        cin >> str;
        for(int i=0; i<n; i++)
        {
            printf("%c", str[i]);
            int j=n*2-1;
            while(j < int(str.size()))
            {
                printf("%c", str[j-i]);
                if((j+i+1) < int(str.size()))
                {
                    printf("%c", str[j+i+1]);
                }
                j = j+(n*2);
            }
        }

        printf("\n");
    }

    return 0;
}
