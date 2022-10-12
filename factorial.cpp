#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,temp,fact;
    cout<<"enter the number : ";
    cin>>n;
    temp = n;
    fact = 1;
    if(n == 1){
        cout<<n <<" fatorial is "<<fact;
    }
    while(n>=1)
    {
        fact*=n;
        n--;
    }

    cout<< temp <<" fatorial is "<<fact;
    return 0;
}