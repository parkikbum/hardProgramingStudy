#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	int level = 0;
	int cmplevel;
	string s;
	string cmps;

	cin >> num;
	cin >> s >> level;
	for (int i = 0; i < num-1; i++) {
		cin >> cmps >> cmplevel;
		if (level > cmplevel) {
			level = cmplevel;
			s = cmps;
		}
	}
	cout << s;
}