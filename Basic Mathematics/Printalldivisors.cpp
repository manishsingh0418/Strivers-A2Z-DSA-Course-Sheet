//Print all the divisors
#include<bits/stdc++.h>
using namespace std;
void printalldivisors(int n)
{
    for(int i=1;i<=n;i++)
    {
        n/i;
        if(n%i==0)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    printalldivisors(n);
    return 0;
}