#include<bits/stdc++.h>
using namespace std;



int main(){
    int a,b,c;
    cin >> a >> b >>c;

    int x=a , y=b , z=c;

    vector<int>v = {a,b,c};
    sort(v.begin(), v.end());

    for(int num:v){
        cout << num << endl;
    }
    cout << endl;

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;


}