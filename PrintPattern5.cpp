/*Print Pattern 5

*****
****
***
**
*

*/

#include<bits/stdc++.h>
using namespace std;
void printpattern5(int n)
{
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
          cout<<"*";
        }
        cout<<endl;

    }
}
int main(){
    int n;
    cin>>n;
    printpattern5(n);
}