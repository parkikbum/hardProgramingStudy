#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int ary[6];

void printary() {
	for (int i = 0; i < 5; i++) {
		cout << ary[i] << " ";
	}
	cout << endl;
}

int main() {

	int tmp = 0;
	int flag = 1;
	for (int i = 0; i < 5; i++) {
		cin >> ary[i];
	}

	while (flag != 0) {
		flag = 0;
		for (int i = 0; i < 5; i++) {
			if (ary[i] != i + 1)
				flag = 1;
		}
		for (int j = 0; j < 4; j++) {
			if (ary[j] > ary[j + 1]) {
				tmp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = tmp;
				printary();
			}
		}
	}
	return 0;
}