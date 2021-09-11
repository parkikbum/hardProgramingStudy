#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;  //비교할 문자열 
	string scmp; //기준이될 문자열 
	int num;
	
	cin >> num;

	for (int i = 0; i < num; i++) {
		getline(cin, s);
		if (i == 0) {          //기준이되는 문자열
			getline(cin, scmp);
		}
		for (int j = 0; j < s.length(); j++) {
			if (s[j] != scmp[j]) {
				scmp[j] = '?';
			}
		}
	}
	cout << scmp;
	cout << endl;
	return 0;
}