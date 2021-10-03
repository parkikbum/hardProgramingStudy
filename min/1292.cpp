#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num1, num2;
	vector<int> v(1000);
	cin >> num1 >> num2;
	int cnt = 0;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 0; j < i && cnt < 1000; j++) {
			v[cnt++] = i;
		}
	}

	int result = 0;

	
	for (int i = num1 - 1; i <= num2 - 1; i++) {
		result += v[i];
	}

	cout << result;
	return 0;
}