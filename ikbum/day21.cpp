#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> sortV;
    int n, sol, cnt;
    cin >> n;
    int tree;
    
    for(int i = 0; i < n; i++){
        cin >> tree;
        sortV.push_back(tree);
    }
    sort(sortV.rbegin(), sortV.rend());

    sol = 0;
    for(int k = 0; k < n; k++){
        sol = max(sol, sortV[k]+k+1);
    }

    cout << sol + 1 << endl;
}