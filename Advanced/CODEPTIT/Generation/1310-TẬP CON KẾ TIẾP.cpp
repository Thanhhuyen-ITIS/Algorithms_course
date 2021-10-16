#include <bits/stdc++.h>

using namespace std;

int n, k, x[1003];
void init(){
    cin >> n >> k;
    for (int i = 1; i <= k; ++i) cin >> x[i];
}
void Print() {
    for (int i = 1; i <= k; ++i)
        cout << x[i] << " ";
    cout << endl;
}
void next(){
    int j = k;
    while (x[j] == n-k+j && j >= 0) --j;
    if(j) {
        ++x[j];
        for (int i = j + 1; i <= n; ++i)
            x[i] = x[j] + i - j;
    }

    else {
        for(int i = 1; i <= k; ++i)
            x[i] = i;
    }
    Print();
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        init();
        next();
    }
}