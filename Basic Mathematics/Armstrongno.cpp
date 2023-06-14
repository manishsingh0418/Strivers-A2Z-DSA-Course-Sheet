#include<bits/stdc++.h>
using namespace std ;
void checkarmstrongno(int n)
{
    int dupn= n;
    int sum=0;
    while(n>0)
    {
        int lastdigit=n%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        n=n/10;

    }
    if(dupn==sum)
    {
        cout<<"Yes";
    
    }
    else
    {
        cout<<"No";
    } 
}
int main()
{
    int n;
    cin>>n;
    checkarmstrongno(n);
    return 0;
}