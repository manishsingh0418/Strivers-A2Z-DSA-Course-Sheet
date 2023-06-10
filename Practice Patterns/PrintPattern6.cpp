/*Print Pattern 6

12345
1234
123
12
1



 */


#include<bits/stdc++.h>
using namespace std;
void printpattern6(int n)
{

    for(int i=0;i<=n;i++)
    {
        int sum=1;
     
       for(int j=n;j>i;j--)
        {
        cout<<sum;
        sum++;
        }
        cout<<endl;
    }
}
int main()
{
int n;
cin>>n;
printpattern6(n);
return 0;

}