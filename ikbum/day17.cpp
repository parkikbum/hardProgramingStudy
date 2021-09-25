#include <iostream>

using namespace std;

int main(){
    int n, s1,s2;
    cin >> n;
    if(n > 5){
    s1 = n % 5;
    if(s1 == 4 || s1 == 2){
        cout << n/5 + s1/2;
    }
    if(s1 == 3 || s1 == 1){
       if(n > 5){
           cout << (n/5)-1 + (s1+5)/2;
       }
       else{
           cout << -1;
       }
    }
    if(s1 == 0){
        cout << n/5;
    }
    }
    else{
        if (n == 5 || n == 2){
            cout << 1;
        }
        else if(n ==4){
            cout << 2;
        }
        else{
        cout << -1;
        }
            }
    }
    