#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int reverseStr(string a){
    reverse(a.begin(), a.end());
    int result = stoi(a);
    return result;
}

int main(){
    string num1, num2;
    int sol = 0;
    cin >> num1 >> num2;

    sol = reverseStr(num1) + reverseStr(num2);
    cout << reverseStr(to_string(sol)) << endl;
}