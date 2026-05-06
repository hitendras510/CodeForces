#include<bits/stdc++.h>
using namespace std;



int main(){
    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    long long ans = 1;
    
    //to prevent overflow we ue modulo at every step
    ans = (ans * a) % 100;
    ans = (ans * b) % 100;
    ans = (ans * c) % 100;
    ans = (ans * d) % 100;

    cout << setw(2) << setfill('0') << ans;

    return 0;
}