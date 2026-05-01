#include<bits/stdc++.h>
using namespace std;



int main(){
    double A,B;
    cin >> A >> B;

    double x = A/B;

    cout <<"floor " <<A<<" / "<<B<<" = "<<floor(x)<<endl;
    cout <<"ceil " <<A<<" / "<<B<<" = "<<ceil(x)<<endl;
    cout <<"round " <<A<<" / "<<B<<" = "<<round(x)<<endl;
}