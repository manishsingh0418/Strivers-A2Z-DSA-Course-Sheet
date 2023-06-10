/*Prit pattern 18
E
E D
E D C
E D C B
E D C B A

*/


#include<bits/stdc++.h>
using namespace std;
void printpattern18(int n)
{
for(int i=0;i<n;i++)
{
    for(char ch =('A'+n-1)-i;ch<=('A'+n-1);ch++)
    {
              
              cout<<ch<<" ";
          }
    cout<<endl;
}
}
int main()
{
    int n;
    cin>>n;
    printpattern18(n);
    return 0;
}