#include <iostream>
#include <algorithm>
using namespace std;

int ary[100000];
int result = 0;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin>>ary[i];
	}
	sort(ary, ary + n);
	int day=2;
	for (int j = n - 1; j >= 0; j--) {
		result = max(result, ary[j]+day);
		day++;
	}
	cout << result;
	
	return 0;
}
