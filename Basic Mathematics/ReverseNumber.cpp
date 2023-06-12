#include<bits/stdc++.h>
using namespace std;
void printreverseno(int n)
{  int reverseno=0;
    while(n>0)
    {
        int lastdigit=n%10;
        n=n/10;
        reverseno=(reverseno*10)+lastdigit;

    }
    cout<<reverseno;
}
int main()
{
int n;
cin>>n;
printreverseno(n);
return 0;
}