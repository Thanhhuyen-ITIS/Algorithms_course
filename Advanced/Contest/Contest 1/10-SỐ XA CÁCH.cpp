#include<bits/stdc++.h>

using namespace std;

#define fast() ios_base::sync_with_stdio(0); cin.tie(0);

int n, x[11], c[11];

void init() {
    for (int i = 0; i < 11; i++) {
        x[i] = 0;
        c[i] = 0;
    }
}
bool check() {
    for (int i = 2; i <= n; ++i) {
        if(abs(x[i] - x[i-1]) <= 1)
            return false;
    }
    return true;
}
void in() {
    if(!check())
        return;
    for (int i = 1; i <= n; i++)
        cout << x[i];
    cout << endl;
}
void Try(int i) {
    int j;
    for (j = 1; j <= n; ++j) {
        if(c[j] == 0) {
            x[i] = j;
            c[j] = 1;
            if(i == n) in();
            else Try(i + 1);
            c[j] = 0;
        }
    }
} 
int main() {
    fast();
    int t;
    cin >> t;
    while(t--) {
        init();
        cin >> n;
        Try(1);
    }
}