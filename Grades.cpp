#include<bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cin>>marks;
    if(25>marks)
    {
cout<<"F";
    }
    else if(marks>=25&&marks<=44){
cout<<"E";
    }
    else if(marks>=45&&marks<=49){
cout<<"D";
    }
        else if(marks>=50&&marks<=59){
cout<<"C";
    }
 else if(marks>=60&&marks<=79){
cout<<"E";
    }
        else if(marks>=80&&marks<=100){
cout<<"E";
    }
    return 0;
}