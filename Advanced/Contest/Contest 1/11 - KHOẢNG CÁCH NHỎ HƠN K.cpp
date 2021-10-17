#include<bits/stdc++.h>

using namespace std;

#define fast() ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fast();
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll ans = 0;
        for (int i = 0; i < n - 1; i++) {
            int l = i + 1, r = n - 1;
            int tmp = 0;
            while(l <= r) {
                int mid = (l + r) / 2;
                if(a[mid] - a[i] < k) {
                    tmp = max(tmp, mid);
                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }
            ans += max(0,(tmp - i));
        }
        cout << ans << endl;
    }
}