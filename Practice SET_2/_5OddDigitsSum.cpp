#include <iostream>
using namespace std;

int main(){

int n = 0;
int sum = 0;
cout<<"Enter a number : ";
cin>>n;

while(n>0){
    int digit = n % 10;

    if(digit % 2 != 0){
        sum = sum + digit;
    }
    
    // removing last digit from given number 
    n = n /10;
}
cout<<"Sum is ODD digit of given number is : " << sum ;

    return 0;
}