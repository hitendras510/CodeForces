#include<bits/stdc++.h>
using namespace std;



int main(){
    long long n,m;
    cin >> n >> m;

    vector<long long> a(m);
    for(int i=0;i<m;i++) cin >> a[i];

    long long curr = 1 , time = 0;
    for(int i=0;i<m;i++){
        time += (a[i] - curr + n) % n;
        curr = a[i];
    }
    cout << time << endl;
}