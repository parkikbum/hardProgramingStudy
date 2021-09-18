#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

void printsong(int a) {
	if (a >= 5) {
		printf("tu+ru*%d", a);
	}
	else {
		cout << "tu";
		while (a--)
			cout << "ru";
	}
}
int main() {
	char str[14][20]{
		"baby","sukhwan","tururu","turu","very","cute","tururu","turu","in","bed","tururu","turu","baby","sukhwan"
	};

	int num;
	int time;
	int mod;

	cin >> num;
	num--;
	time = num / 14;
	mod = num % 14;

	if (str[mod][0] != 't') cout << str[mod];
	else if (str[mod-1][0] == 't') {
		printsong(1 + time);
	}
	else printsong(2 + time);
	
	return 0;
}



