#include<bits/stdc++.h>
using namespace std;

int main() {
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    long long start = max(l1, l2);
    long long end = min(r1, r2);

    if(start <= end) {
        cout << start << " " << end;
    } else {
        cout << -1;
    }

    return 0;
}