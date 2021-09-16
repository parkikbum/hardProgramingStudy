#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string num1, num2, result;
    int sol;
    cin >> num1 >> num2;

    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    sol = stoi(num1) + stoi(num2);

    result = to_string(sol);

    reverse(result.begin(), result.end());
    cout << result;
}