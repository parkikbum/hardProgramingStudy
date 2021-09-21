#include <iostream>
#include <string>
#include <algorithm>

 using namespace std;

 int main(){
     int n = 0;
     int result = 0;
     cin >> n;
     for (int i = 0; i < n; i ++){
         string str;
         char c =' ';
         int cnt = 0;
         int nCnt = 0;
         cin >> str;

         for(int k = 0; k < str.length(); k ++){
             cnt = count(str.begin(), str.end(), str[k]);
             c = str[k];
             int l = k;
             for(int j = 0; j < cnt; j ++){
                 if (str[l] != c){
                     nCnt += 1;
                     break;
                 }
                 l ++;
             }
             if (nCnt == 0){
                 k = k+cnt-1;
             }
         }
         if (nCnt == 0){
             result = result + 1;
         }
     }
     cout << result << endl;

 }