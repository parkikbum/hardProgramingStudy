#include <iostream>
using namespace std;

int main() {
	int casenum;
	int n, m;
	int bridge[30][30] = { 0, };
	cin >> casenum;
	while (casenum--) {
		cin >> n >> m;
		for (int i = 1; i <= m; i++) {
			bridge[1][i] = i;
		}
		for (int i = 2; i <= n; i++) {
			for (int j = 2; j <= m; j++) {
				bridge[i][j] = bridge[i - 1][j - 1] + bridge[i][j - 1];
			}
		}
		cout << bridge[n][m]<<endl;
	}
}