#include <iostream>

using namespace std;

int main() {
	int test;
	char playerlist[100][21];  //100�� , 20���� ����

	cin >> test;

	for (int i = 0; i < test; i++) {
		int size;                    //test ũ�� 
		int bestPrice = 0; int playerPrice; int name = 0; //�ְ� �������� �����̸� 
		cin >> size;
		for (int j = 0; j < size; j++) {
			cin >> playerPrice;
			cin >> playerlist[j];
			if (playerPrice > bestPrice) {
				bestPrice = playerPrice;
				name = j;
			}
			
		}cout << playerlist[name] << endl;
	}
	return 0;

}