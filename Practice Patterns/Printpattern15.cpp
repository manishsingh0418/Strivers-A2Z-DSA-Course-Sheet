/*Print Patttern 15
A B C D E
A B C D
A B C
A B
A
*/

#include<bits/stdc++.h>
using namespace std;
void printpattern15(int n)
{
    for (int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+(n-i-1);ch++)
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
    printpattern15(n);
    return 0;
}