#include <iostream>
#include <string>
using namespace std;

int main() {
	int N = 0;
	cin >> N;

	string strarr[50] = { "", };

	for (int i = 0; i <= N; i++) {
		getline(cin, strarr[i]);
	}

	for (int i = 0; i <= N; i++) {
		if ('a' <= strarr[i][0] && strarr[i][0] <= 'z') {
			strarr[i][0] = strarr[i][0] - 32;
		}
	}
	for (int i = 1; i <= N; i++) {
		cout << strarr[i] << endl;
	}

	return 0;
}