#include<bits/stdc++.h>
using namespace std;



int main(){
    long long n;
    cin >> n;

    while(n >= 10){
        n /= 10; // obtain first digit
    }
    if(n % 2 == 0){
        cout << "EVEN";
    }else{
        cout <<"ODD";
    }
}