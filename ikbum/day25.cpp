#include<iostream>
#include <string>

using namespace std;

int main(){
    string a, b;
    int cnt,sol;
    sol = 0;

    cin >> a >> b;

    for(int i = 0; i <= b.length() - a.length(); ++i){
        cnt = 0;
        for(int k = 0; k < a.length(); ++k){
            if(a[k] == b[k+i]){
                ++cnt;
            }
        }
            sol = max(sol, cnt);
    }
    sol = sol + (b.length() - a.length());
    sol = b.length() - sol;

    cout << sol << endl;


   

}