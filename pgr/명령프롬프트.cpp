#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    string str[50];

    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }

    char chk;

    for (int i = 0; i < str[0].length(); i++) {
        chk = str[0][i];
        for (int j = 0; j < N; j++) {
            if (chk != str[j][i]) {
                chk = '?';
                break;
            }
        }
        cout << chk;
    }
}
