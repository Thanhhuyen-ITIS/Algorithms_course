#include<bits/stdc++.h>

using namespace std;

#define fast() ios_base::sync_with_stdio(0); cin.tie(0);

int x[16], n, a[16];

void init() {
    for (int i = 0; i < 16; ++i)
        x[i] = 0;
}
bool isPrime(int n) {
    if(n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if(n % i == 0)
            return false;
        
    }
    return true;
}

void in(){
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if(x[i])
            sum += a[i];
    }
    if(isPrime(sum)) {
        for (int i = 1; i <= n; ++i) {
            if(x[i]) cout << a[i] << " ";
        }
        cout << endl;
    }
}
void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        x[i] = j;
        if(i == n) in();
        else Try(i + 1);
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        init();
        cin >> n;
        for (int i = 1; i <= n ; ++i)
            cin >> a[i];
        sort(a+1, a + n+1, greater<int>());
        Try(1);
    }
    
}