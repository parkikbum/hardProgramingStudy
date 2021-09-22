#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n = 0;
    int result = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        int sol = 0;
        char c = ' ';
        int cnt = 0;
        int nCnt = 0;
        cin >> str;

        for (int k = 0; k < str.length(); k++) {
            cnt = count(str.begin(), str.end(), str[k]);
            c = str[k];

            if (str[k + cnt - 1] == c) {
                sol = sol + 1;
                k = k + cnt - 1;
            }
            else {
                nCnt = nCnt + 1;
                break;
            }
        }
        if (nCnt == 0) {
            result = result + 1;
        }
    }
    cout << result << endl;

}