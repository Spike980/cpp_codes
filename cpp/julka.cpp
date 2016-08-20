#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    char ch;
    int n, max, index, result, temp;

    for(int i=0; i<10; i++)
    {
        vector<int> kldia, nat, tot, more, add, sub; 
        while(scanf("%c", &ch) && ch!='\n')
        {
            n = int(ch) - 48;
            tot.push_back(n);
        }

        while(scanf("%c", &ch) && ch!='\n')
        {
            n = int(ch) -48;
            more.push_back(n);
        }
        max = more.size() - 1;

        int carry=0;
        for(int j=int(tot.size()-1); j >= 0; j--)
        {
            if(max >=0)
            {
                result = tot[j] + more[max] + carry;
            } else {
                result = tot[j] + carry;
            }
            index = result % 10;
            carry = result / 10;
            add.push_back(index);
            max = max-1;
        }
        if(carry != 0)
            add.push_back(carry);

        int x = add.size() - 1;
        for(int j=0; j<(int(add.size()/2)); j++)
        {
            temp = add[j];
            add[j] = add[j+x];
            add[j+x] = temp;
            x-=2;
        }



        
        // subtraction    
        max = more.size() - 1;
        for(int j=int(tot.size()-1); j >= 0; j--)
        {
        
        if(max >=0)
        {
            if(more[max] > tot[j])
            {
                tot[j] = tot[j] + 10;
                int y = j-1;
                while(tot[y] == 0)
                {
                    y--;
                }
                tot[y]--;
            }

            result = tot[j] - more[max];
            sub.push_back(result);
            max--;
        } else {
            sub.push_back(tot[j]);
        }
        }
            


        int y=sub.size()-1;

        
        for(int j=0; j<(int(sub.size()/2)); j++)
        {
            temp = sub[j];
            sub[j] = sub[j+y];
            sub[j+y] = temp;
            y-=2;
        }

        int j=0;
        while(sub[j] == 0 && j<(int(sub.size())-1))
        {
            sub.erase(sub.begin());
        }




            

        // Division
        int rem=0, z;
        
        for(int k=0; k<int(add.size()); k++)
        {
            if(rem==0)
            {
                if(add[k] < 2)
                {
                    if(k+1 < int(add.size()))
                    {
                    result = add[k]*10 + add[k+1];
                    k++;
                    }
                    else if(add[k] == 0)
                    {
                        kldia.push_back(0);
                        continue;
                    }
                } else {
                    result = add[k];
                }
            } else {
                result = rem*10 + add[k];
            }
            z = result / 2;
            kldia.push_back(z); 
            rem = result - 2*z;
        }

        for(int j=0; j<int(kldia.size()); j++)
            cout << kldia[j];
        cout << '\n';

            

        rem=0;
        for(int k=0; k<int(sub.size()); k++)
        {
            if(rem==0)
            {
                if(sub[k] < 2)
                {
                    if(k+1 < int(sub.size()))
                    {
                    result = sub[k]*10 + sub[k+1];
                    k++;
                    }
                    else if(sub[k] == 0)
                    {
                        nat.push_back(0);
                        continue;
                    }
                } else {
                    result = sub[k];
                }
            } else {
                result = rem*10 + sub[k];
            }
            z = result / 2;
            nat.push_back(z); 
            rem = result - 2*z;
        }

        for(int j=0; j<int(nat.size()); j++)
            cout << nat[j];
        cout << '\n';
            
    }
        return 0;
}
