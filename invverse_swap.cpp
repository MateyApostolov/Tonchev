#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, q, c, t, x, y;
    cin >> n >> q;
    vector<int> p(n + 1), pinv(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    for(int i = 1; i <= n; i++) {
        pinv[p[i]] = i;
    }
    for(int i = 0; i < q; i++) {
        cin >> t;
        if(t == 1) {
            cin >> x >> y;
            swap(p[x], p[y]);
            swap(pinv[p[x]], pinv[p[y]]);
        } else {
            swap(p, pinv);
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << p[i] << ' ';
    }
    return 0;
}
