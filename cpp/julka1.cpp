#include <cstdio>

using namespace std;

inline void swap(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
}

int main()
{
    int kld[101], more[101], sum[101], sub[101];
    int x, carry=0, rem, borrow;
    char ch;
    bool calc;

    for(int i=0; i<10; i++)
    {
        x=0;
        while(scanf("%c", &ch) && (ch != '\n'))
            sum[x++] = ch-48;
        for(int j=0; j<x/2; j++)
            swap(sum[j], sum[x-j-1]);
        for(int j=x; j<101; j++)
            sum[j] = 0;

        x=0;
        while(scanf("%c", &ch) && (ch != '\n'))
            more[x++] = ch-48;
        for(int j=0; j<x/2; j++)
            swap(more[j], more[x-j-1]);
        for(int j=x; j<101; j++)
            more[j] = 0;



        x=0;
        while(x<=100)
        {
            sum[x] = sum[x] + more[x] + carry;
            if(sum[x] >= 10) 
            {
                sum[x] -= 10;
                carry = 1;
            }
            else 
                carry = 0;
            x++;
        }
       rem = 0;
       calc = false;
       x=100;
       while(x>=0)
        {
            kld[x] = (sum[x] + rem)/2;
            if(kld[x]) calc=true;
            if(calc) putchar(kld[x] + 48);

            if((sum[x] + rem) % 2 == 1)
                rem = 10;
            else 
                rem = 0;
            x--;
        }
        printf("\n");

        x=0;
        borrow=0;
        while(x <= 100)
        {
            sub[x] = kld[x] - more[x] - borrow;
            if(sub[x] < 0) { sub[x] += 10; borrow = 1;} 
            else borrow = 0;
            x++;
        }

        for(x=100; !sub[x]&&x>=0; x--);
        if(x == -1) putchar('0');
        for( ;x>=0; x--)
            putchar(sub[x] + 48);
        putchar('\n');
    }


    
    return 0;
}
