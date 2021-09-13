#include <iostream>
#include <string>

using namespace std;


int main() {
    string str;
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i ++)
    {
        getline(cin,str);
        
        if ('a' <= str[0] && str[0] <= 'z')
            str[0] -= 32;
        cout << str << '\n';
    }
}