#include<iostream>
using namespace std;

int main(){

    int num ;
    cout<<"Enter a number:";
    cin>>num;

    while(num > 0){
        int digit = num % 10; // to remove digits one by one
        cout<<  digit <<" ";

        num = num / 10; // storing new num after removing last digit from given number.
    }

    return 0;
}