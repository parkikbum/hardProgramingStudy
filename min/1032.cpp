#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;  //���� ���ڿ� 
	string scmp; //�����̵� ���ڿ� 
	int num;
	
	cin >> num;

	for (int i = 0; i < num; i++) {
		getline(cin, s);
		if (i == 0) {          //�����̵Ǵ� ���ڿ�
			getline(cin, scmp);
		}
		for (int j = 0; j < s.length(); j++) {
			if (s[j] != scmp[j]) {
				scmp[j] = '?';
			}
		}
	}
	cout << scmp;
	cout << endl;
	return 0;
}