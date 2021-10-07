#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;

	map<string, int> pmons_map;
	string* pmons = new string[N];

	for (int i = 0; i < N; i++) {
		cin >> pmons[i];
		pmons_map[pmons[i]] = i+1;
	}

	for (int i = 0; i < M; i++) {
		string tmp;
		cin >> tmp;

		if (48 <= tmp[0] && tmp[0] <= 57)cout << pmons[stoi(tmp) - 1] << "\n";

		else {
			cout << pmons_map[tmp] << "\n";
		}
	}

	return 0;
}