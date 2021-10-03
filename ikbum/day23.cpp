#include <iostream>

using namespace std;

int n;
int sol;
int maxx;

int cal(int t, bool k){
    int temp = t;
    int nn = 0;
    int num = n;
    int cnt = 1;
    while(true){
        if(num - temp >= 0){ 
            cnt = cnt + 1;
            if(k == true && cnt == 2){
                cout << num << " ";
            }
             if(k == true){
                cout << temp << " ";
            }
            nn = num; 
            num = temp; 
            temp = nn - temp; 
            nn = num; 
        }
        else{
            cnt = cnt + 1;
            break;
        }
    }
    if(k == false){
    return cnt;
    }
    else{
        return temp;
    }
}


int main(){
    int max, l;

    cin >> n;

    int num = n;

    maxx = 0;
    int max2 = 0;
    for(int i = n/2; i <= n; i ++){
        if (maxx < cal(i,false)){
            maxx = cal(i,false);
            max2 = i;
        }
    }

    cout << maxx << endl;
    cout << cal(max2, true) << endl;
}

