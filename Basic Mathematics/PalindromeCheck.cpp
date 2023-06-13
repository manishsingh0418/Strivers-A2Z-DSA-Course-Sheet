#include<bits/stdc++.h>
using namespace std;
void checkpalimdrome(int n)
{
    int reverseno=0;
    int duplicate_n=n;
    while(n>0)
    {
        int lastdigit=n%10;
        n=n/10;
        reverseno=(reverseno*10)+lastdigit;

    }
    if(reverseno==duplicate_n)
    {
        cout<<"true";
    }
    else {
        cout<<"false";
    }

}
int main()
{
    int n ;
    cin>>n;
    checkpalimdrome(n);
    return 0;
}