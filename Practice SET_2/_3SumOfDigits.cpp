#include<iostream>
using namespace std;

int main(){

    int num = 0; 
    int sum = 0;
    cout<<"Enter a number:";
    cin>>num;

    while(num > 0){
        int digit = num % 10; // to remove digits one by one
        sum = sum + digit;  // storing sum of each digits one by one in sum variable.
        num = num / 10; // storing new num after removing last digit from given number.
    }

    cout<<"Sum of all digits is : "<< sum;

    return 0;
}