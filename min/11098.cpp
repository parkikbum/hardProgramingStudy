#include <iostream>

using namespace std;

int main() {
	int test;
	char playerlist[100][21];  //100명 , 20글자 선수

	cin >> test;

	for (int i = 0; i < test; i++) {
		int size;                    //test 크기 
		int bestPrice = 0; int playerPrice; int name = 0; //최고가 선수가격 선수이름 
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