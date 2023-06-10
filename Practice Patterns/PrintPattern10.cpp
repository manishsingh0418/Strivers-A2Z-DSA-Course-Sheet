#include<bits/stdc++.h>
using namespace std;
void printpattern10(int n)
{
    for(int i=0 ;i<=2*n-1;i++)
    {
        int star=i;
        if(i>n)
        {
            star=2*n-i;
        }
        for (int j=0;j<star;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    printpattern10(n);
    return 0;
}