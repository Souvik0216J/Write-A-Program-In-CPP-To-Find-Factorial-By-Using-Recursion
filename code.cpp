#include<iostream>
using namespace std;

int factorial(int num)
{
    if(num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * (factorial(num - 1));
    }
}
int main()
{
    int ans = 0, n;

    cout<<"Enter Number: ";
    cin>>n;
    ans = factorial(n);
    cout<<"Factorial Is: "<<ans;
    
    return 0;
}