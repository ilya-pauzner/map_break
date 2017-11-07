#include <bits/stdc++.h>

using namespace std;

int main() {
    map<vector<int>, int> mv;
    int base;
    cin >> base;
    auto t = clock();
    int n = pow(2, base);
    for (int i = 0; i < n; i++) {
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            v[i] = 0;
        }
        v.back() = i;
        mv[v] = i;
    }
    cout << (clock() - (double) t) / (double) CLOCKS_PER_SEC;
    return 0;
}