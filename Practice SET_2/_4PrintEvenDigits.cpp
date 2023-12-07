#include<iostream>
using namespace std;

int main(){

    int num ;
    cout<<"Enter a number:";
    cin>>num;

    while(num > 0){
        int digit = num % 10; // to remove digits one by one

        // using condition to print only even number 
        if(digit % 2 == 0){
            cout<<  digit <<" ";
        }

        num = num / 10; // storing new num after removing last digit from given number.
    }

    return 0;
}