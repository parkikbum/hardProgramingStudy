#include <iostream>
#include <string>
#include<map>
#include <vector>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,q;
    cin >> n >> q;
    map<string, int> pkm;
    string intPkm [100000 + 1];
    string sol[q];


    for(int i =0; i < n; i++){
        string name;
        cin >> name;
        pkm.insert(pair<string, int>(name, i));
        intPkm[i] = name;
    }

    for(int l = 0; l < q; l++){
        char ans[21];
        cin >> ans;
        if(ans[0] >= '0' && ans[0] <= '9'){
            int index = atoi(ans);
            cout << intPkm[index-1] << "\n";
        }
        else{
            string s = ans;
            cout << pkm[ans] + 1<< "\n";
        }
        }
    }