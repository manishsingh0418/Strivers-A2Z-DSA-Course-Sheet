/*Print Pattern 1 GFG
n=5
*****
*****
*****
*****
*****

 */

#include<bits/stdc++.h>
using namespace std;
void printpattern(int n){
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) 
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
printpattern(n);
return 0;
}