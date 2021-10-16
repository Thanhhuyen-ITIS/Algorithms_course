#include<bits/stdc++.h>

using namespace std;

#define fast() ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    int n, k;
    cin >> n >> k;
    vector<ll> c(n);
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        c[i] = x.size();
    }
    ll ans = 0;
    map<ll, ll> M;
    for (int i = 0; i < k; i++) {
        ans += M[c[i]];
        M[c[i]]++;
    }
    for (int i = k; i < n; i++) {
        ans += M[c[i]];
        M[c[i]]++;
        M[c[i - k]]--;
    }
    cout << ans << endl;
}