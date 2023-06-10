/*Print Pattern 7 
 *********
  *******
   *****
    ***
     *
*/

#include<bits/stdc++.h>
using namespace std;
void printpattern7(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
      cout<<" ";        
        }
        for(int j=0;j<=2*i;j++)
        {
      cout<<"*";        
        }
        for(int j=0;j<=n-i-1;j++)
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
    printpattern7(n);
    return 0;

}
