#include <iostream>
using namespace std;

int main() {
	int first; int num;
	int count=0;
	cin >> first;
	num = first;
	while (1) {
		num = (num % 10) * 10 + ((num / 10) + num % 10) % 10;
		count++;
		if (num == first) {
			break;
		}
	}
	cout << count;
	return 0;
}