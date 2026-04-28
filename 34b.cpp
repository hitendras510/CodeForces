//n tv , i cost a[i], max tv -> m 
// max sum of money that he can earn ,(he needs to get more negative priced tv)
#include<bits/stdc++.h>
using namespace std;



int main(){
    int n,m;
    cin >> n >> m;

    
    vector<int>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    
    sort(a.begin(),a.end());
    int final=0;

    for(int i=0;i<m;i++){
        if(a[i]<0){
            final += -a[i];
        };
    }
    cout << final << endl;
}