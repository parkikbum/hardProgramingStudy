#include <iostream>
#include <string>
using namespace std;

int main(){
    int num,ten,one,temp,cnt,origin;
    cnt = 1;

    cin >> num;
    origin = num;

    ten = num/10;
    one = num%10;
    temp = ten + one;
    num = one*10 + temp%10;
    if (origin == num){
        cout << cnt;
        exit(0);
    }

    while(true){
        cnt = cnt + 1;
        ten = num/10;
        one = num%10;
        temp = ten + one;
        num = one*10 + temp%10;
        if (origin == num){
            break;
        }
    }
    cout << cnt;
}