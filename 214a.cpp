#include<bits/stdc++.h>
using namespace std;



int main(){
    int n,m;
    cin >> n >>m;

    int count = 0;

    for(int a=0;a<=1000;a++){
        int b=n-a*a;
        if(b >= 0 && a + b*b == m){
            count ++;
        }
    }
    cout << count ;


}