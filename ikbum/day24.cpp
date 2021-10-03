#include <iostream>
#include <queue>

using namespace std;

int main (){
    int n,k;

    cin >> n >> k;
    queue<int> c;
    for(int i = 0; i < n; i++){
        c.push(i+1);
    }
    cout << "<";
    while (c.size() - 1)
    {
        for(int j = 0; j < k - 1; j++){
            c.push(c.front());
            c.pop();
        }
        cout << c.front() << ", ";
        c.pop();
    }    
    cout << c.front() << ">";
}
