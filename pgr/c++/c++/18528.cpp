#include <iostream>
#include <string>
using namespace std;

int queue[2000001];
int idx = 0;

void push(string x) {
	queue[idx] = stoi(x);
	idx++;
}
void pop() {
	if (idx <= 0)cout << -1 << '\n';
	if (idx>0) {
		cout << queue[0];
		for (int i = 0; i < idx; i++) {
			queue[i] = queue[i + 1];
		}
		queue[idx] = '\0';
		idx--;
	}
}
void size() {
	if (idx >= 0)cout << idx << '\n';
	else cout << 0 << '\n';
}
void empty() {
	if (idx > 0)cout << 0 << '\n';
	else cout << 1 << '\n';
}
void front() {
	if (idx > 0)cout << queue[0] << '\n';
	else cout << -1 << '\n';
}
void back() {
	if (idx > 0)cout << queue[idx - 1] << '\n';
	else cout << -1 << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	cin.ignore();

	string set;

	for (int i = 0; i < N; i++) {
		getline(cin, set);
		if (set[1] == 'u') {
			string tmp = "";
			for (int i = 5; i < set.length(); i++) {
				tmp += set[i];
			}
			push(tmp);
		}
		else if (set[1] == 'o') {
			pop();
		}
		else if (set[1] == 'i') {
			size();
		}
		else if (set[1] == 'm') {
			empty();
		}
		else if (set[1] == 'r') {
			front();
		}
		else if (set[1] == 'a') {
			back();
		}
	}
}