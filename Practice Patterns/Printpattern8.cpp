
/*Print Pattern 8
 *********
  *******
   *****
    ***
     *
*/
#include<bits/stdc++.h>
using namespace std;
void printpattern8(int n)
{
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<=i;j++)
    {
        cout<<" ";
    }
     for(int k=0;k<=(2*n-2*i-2);k++)
    {
        cout<<"*";
    }
    for(int l=0;l<=i;l++)
    {
        cout<<" ";
    }
    cout<<endl;
    }
     
}
int main()
{
    int n;
    cin>>n;
    printpattern8(n);
    return 0;

}
