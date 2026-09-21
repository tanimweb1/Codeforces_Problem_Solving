#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a,b,c;
        cin>>a>>b>>c;
        long long x = abs(a - b);
        long long y = abs(a + c - b);
        cout << max(x, y) << endl;
    }

    return 0;
}