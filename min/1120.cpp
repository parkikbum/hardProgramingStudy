#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string A, B;
    cin >> A >> B;

    int maxlen = 50; 

    for (int i = 0; i <= B.length() - A.length(); i++) {

        int cnt = 0;
        for (int j = 0; j < A.length(); j++) {
            if (A[j] != B[j + i])
                cnt++;
        }
        maxlen = min(maxlen, cnt);
    }
    cout << maxlen << endl;

    return 0;
}