#include <cstdio>

using namespace std;

int main()
{
    int t, n;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        int res[160], res_size=1, prod;
        res[0] = 1;
        int carry = 0;

        for(int j=n; j>1; j--)
        {
            for(int k=0; k<res_size; k++)
            {
                prod = res[k]*j + carry;
                res[k] = prod % 10;
                carry = prod/10;
            }

            while(carry)
            {
                res[res_size] = carry%10;
                carry = carry/10;
                res_size++;
            }
        }

        for(int j=res_size-1; j>=0; j--)
        {
            printf("%d", res[j]);
        }
        printf("\n");
                
        }

   return 0;
}
