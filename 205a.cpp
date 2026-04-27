#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    int min_value = INT_MAX;
    int count = 0;
    int index = -1;

    for(int i=0;i<n;i++){
        if(a[i] < min_value){
            min_value = a[i];
            count = 1;
            index = i+1; // 1 based indexing
        }else if(a[i] == min_value){
            count ++;
        }    
    }
    if(count > 1) cout << "Still Rozdil";
    else cout << index;
    
    return 0;
}