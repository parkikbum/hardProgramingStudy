#include <iostream>
#include <string>
using namespace std;

int main() {
	char voca[5][16] = { 0, };

	for (int i = 0; i < 5; i++) {
		cin >> voca[i];
	}
	for (int j = 0; j < 15; j++) {
		for (int k = 0; k < 5; k++) {
			if (voca[k][j] != '\0') {
				cout << voca[k][j];
			}
		}
	}
}
