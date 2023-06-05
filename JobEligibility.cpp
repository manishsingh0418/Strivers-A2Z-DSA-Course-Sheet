/*Take the age from the user and then decide accordingly
1.If age<18,
 print->not eligible
2.If age>=18 and age<=54
print->"eligible for job"
3.If age>=55 and age<=57;
print-"eligible for job,but retirement soon"
4.If age>57
print->"retirement time"

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your Age";
    cin>>age;
    if(age<18){
        cout<<"Not eligible";
    }
    else if(age>=18&&age<=54){
       cout<<"eligible for job";
    }
    else if(age>=55&&age<=57)
    {
       cout<<"eligible for job ,but retirement soon";
    }
    else{
       cout<<"retirement time";
    }
}