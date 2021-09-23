#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main() {
	int num;
	cin >> num;

	pair<int, int>* p = new pair<int, int>[num];

	for (int i = 0; i < num; i++) {
		cin >> p[i].first >> p[i].second;
	}
	for (int i = 0; i < num; i++) {
		int cnt = 1;
		for (int j = 0; j < num; j++) {
			if (p[i].first < p[j].first && p[i].second < p[j].second) {
				cnt++;
			}
		}
		cout << cnt<<' ';
	}
	cout << endl;
	return 0;
}