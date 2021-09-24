#include <iostream>
#include<string>

using namespace std;

int main(){
    int n1,n2,n3,year;
    int s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    n1 = 1;n2=1;n3=1;
    year = 0;
    while (true){
        year = year + 1;
     if(s1 == n1 && s2 == n2 && s3 == n3){
        cout << year;
        break;
    }
        n1 = n1 + 1;
        n2 = n2 + 1;
        n3 = n3 + 1;
        
    if(n1 % 16 == 0){
        n1 = 1;
    }
    if(n2 % 29 ==0){
        n2 = 1;
    }
    if(n3 % 20 == 0){
        n3 = 1;
    }
}
       
   
    

}