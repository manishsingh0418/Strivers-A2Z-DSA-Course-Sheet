//Find Count of Number
#include<bits/stdc++.h>
using namespace std;
void printcount(int n)
{
    int count=0;
while(n>0)
{
    n=n/10;
    count=count+1;
}
cout<<count;
}
int main()
{
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    printcount(n);
}
