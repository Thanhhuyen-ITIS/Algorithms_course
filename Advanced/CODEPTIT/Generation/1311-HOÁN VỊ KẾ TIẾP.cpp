#include <bits/stdc++.h>

using namespace std;

int n, x[1003];

void init(){
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> x[i];
}
void Print() {
    for (int i = 1; i <= n; ++i) 
        cout << x[i] << " ";
    cout << endl;
}

void next() {
    int k = n  - 1;
    while(x[k] > x[k+1] && k >= 0) --k;
    if(k) {
        int j = n;
        while(x[k] > x[j] )
            --j;
        swap(x[j], x[k]);
        int l = j + 1, r = k - 1;
        while(l <= r) {
            swap(x[l], x[r]);
            ++l; --r;
        }
    }
    else {
        for (int i = 1; i <= n; ++i)
            x[i] = i;
    }
    Print();
}
int main(){
    int t;
    cin >> t;
    while(t--) {
        init();
        next();
    }
}