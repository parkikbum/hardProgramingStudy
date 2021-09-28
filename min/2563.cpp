#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 101;
int colored[MAX][MAX];

int main(void) {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		for (int j = y + 1; j <= y + 10; j++) {
			for (int k = x + 1; k <= x + 10; k++) {
				colored[j][k] = 1;
			}
		}
	}
	int result = 0;
	for (int i = 1; i < MAX; i++) {
		for (int j = 1; j < MAX; j++) {
			if (colored[i][j]) {
				result++;
			}
		}
	}
	cout << result << endl;
	return 0;

}