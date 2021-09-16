#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int Rev(int num)
{
    vector<int> k;

    while (num) {
        k.push_back(num % 10);
        num /= 10;
    }
    int result = 0;

    for (int i = 0; i < k.size(); i++)
        result = result + (k[i] * pow(10, (k.size() - 1 - i)));

    return result;
}
int main(void)
{
    int x, y;

    cin >> x >> y;
    cout << Rev(Rev(x) + Rev(y)) << endl;
    return 0;
}