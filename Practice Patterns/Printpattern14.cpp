/*Print Pattern 14
A B
A B C
A B C D
A B C D E
A B C D E F

*/

#include<bits/stdc++.h>
using namespace std;
void printpattern13(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(char ch='A';ch<'A'+i;ch++)
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
    printpattern13(n);
    return 0;
}