#include<iostream>
using namespace std;
int main()
{
    int i,num;
    cout<<"Enter numbers";
    cin>>num;
    int fact=1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
        cout<<fact;
}