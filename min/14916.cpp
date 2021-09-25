#include <iostream>
using namespace std;

int main() {
	int cnt=0;
	int num;

	cin >> num;

	if (num == 1 || num == 3) {
		cout << "-1" << endl;

	}
	while (num>0) {
		if (num % 5 == 0) {
			cout << num / 5 + cnt;
			return 0;
		}
		num = num - 2;
		cnt++;
	}
	if (num == 0) {
		cout << cnt << endl;
	}
}