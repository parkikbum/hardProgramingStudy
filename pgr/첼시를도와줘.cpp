#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	char players[100][21];

	for (int i = 0; i < N; i++) {
		int p;
		cin >> p;

		int highest = 0;
		int prices;
		int name = 0;

		for (int j = 0; j < p; j++) {
			cin >> prices;
			cin >> players[j];

			if (prices > highest) {
				highest = prices;
				name = j;
			}
		}
		cout << players[name] << endl;
	}
	return 0;
}
