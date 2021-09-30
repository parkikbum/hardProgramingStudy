#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	string result;

	int i=0;
	int cnt=0;

	cin >> s;
	if (s.size() == 1 && s[0] == 'X') {
		cout << "-1" << endl;
		return 0;
	}
	while (s[i] != '\0') {
		while (s[i] == 'X' || s[i] != '.') {
			i++;
			cnt++;
			if (s[i] == '\0') {
				break;
			}
		}
		if (cnt % 2 == 0) {
			while (cnt >= 4) {
				result += "AAAA";
				cnt -= 4;
			}
			while (cnt >= 2) {
				result += "BB";
				cnt -= 2;
			}
		}
		if (cnt != 0) {
			cout << "-1" << endl;
			return 0;
		}
		if (s[i] == '.') {
			result += ".";
			i++;
		}
	}
	cout << result << endl;
}