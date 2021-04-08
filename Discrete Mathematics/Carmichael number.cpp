#include<bits/stdc++.h>
using namespace std;

int CheckGCD(int a, int b)
{
    if (a < b)
        return CheckGCD(b, a);
    if (a % b == 0)
        return b;

    return CheckGCD(b, a % b);
}

int sl(int k, int l, int m)
{
    if (l == 0)
        return 1;

    int r = sl(k, l / 2, m) % m;
    r =(r*r)%m;

    if (l % 2 == 1)
        r =(r*k)%m;

    return r;
}

void checkPositiveAndComposite(int p)
{
    int flag=0,k=0;
    if (p <= 1)
        cout<< "Input does not satisfy the condition";
    else
        for (int i = 2; i < p; i++)
            if (p % i == 0)
            {
                flag=1;
            }

    if(flag==0)
    {
        cout<< "Input does not satisfy the condition";
    }
    else
    {
        for (int i = 2; i < p; i++)
        {
            if (CheckGCD(i, p) == 1)
            {
                k=sl(i, p - 1, p);
                if (k != 1)
                    break;
            }
        }
        if(k==1)
        {
            cout<<p<<" is a Carmichael number."<<endl;
        }
        else
        {
            cout<<p<<" is not a Carmichael number."<<endl;
        }
    }
}


int main()
{
    int n;
    cout<< "Enter a positive composite number : ";
    cin>>n;
    checkPositiveAndComposite(n);

    return 0;
}

