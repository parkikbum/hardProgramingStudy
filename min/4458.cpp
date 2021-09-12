#include <iostream>
#include <string>
using namespace std;

string s;
int num;
int main() {

    cin >> num;
    cin.ignore();
    while (num--) {
        getline(cin, s);
        if (s[0] >= 97 && s[0] <= 122) {
            s[0] -= 32;
        }
        cout << s << endl;
    }
}
