#include <iostream>

using namespace std;

int main() {
	int e, s, m;
	int year=1;

	cin >> e >> s >> m;
	while (1) {
		if ((year - e) % 15 == 0 && (year - s) % 28 == 0 && (year - m) % 19 == 0) {
			break;
		}
		else
			year++;
	}
	cout << year << endl;
	return 0;
}