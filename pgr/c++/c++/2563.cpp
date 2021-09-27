#include <iostream>
using namespace std;

int paper[100][100] = { 0, };
int x, y;

void stickPaper(int a, int b) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			paper[a + i][b + j]++;
		}
	}
	return;
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		stickPaper(x, y);
	}

	int area = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] != 0)area++;
		}
	}

	cout << area;
	return 0;
}