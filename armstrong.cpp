//this is the program to check the given number is armstrong or not
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,n,org,len,arm;
    cout<< "enter the number : ";
    cin>> num;
    org = num;
    len = 3;

    while(num!= 0){
        n = num % 10;
        arm += pow(n,len);
        num = num/10;
    }

    if(org == arm){
        cout<< "the number is armstrong";
    }
    else{
        cout<< "the number is not armstrong";
    }

}