/*Print Pattern 16
A
BB
CCC
DDDD
EEEEE
*/

#include<bits/stdc++.h>
using namespace std;
void printpattern16(int n)
{
    for(int i=0;i<n;i++)
    {
        char ch='A'+i;
       
        for(int j=0;j<=i;j++)
        {
            cout<<ch;
        }
        cout<<endl;
        
    }
}
int main()
{
    int n;
    cin>>n;
    printpattern16(n);
    return 0;
}