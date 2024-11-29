#include<iostream>
using namespace std;

int main(){
    int x = 1,odd=0,even= 0;
    while(x!=0){
    cout << "Enter an integer: ";
    cin >> x;
        if(x%2==0 && x != 0){
            even = even+1;
        }
        if(x%2==1 && x != 0){
            odd = odd+1;
        }   
    }
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}