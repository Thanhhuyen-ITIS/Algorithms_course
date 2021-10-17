#include<bits/stdc++.h>

using namespace std;

#define fast() ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long

ll bir[30];
char c[30];

void init() {
    bir[0] = 1;
    for (int i = 1; i < 30; ++i)
        bir[i] = bir[i - 1] * 2;

    for (int i = 1; i <= 26; ++i)
    {
       c[i] = 'A' + i - 1;
    }
}
void Try(int i,int k) {
    if(k == bir[i-1]) {
        cout << c[i] << endl;
        return;
    }
    if(k > bir[i-1]) {
        return Try(i - 1, k - bir[i-1]);
    }
    return Try(i - 1, k);
}
int main() {
    fast();
    int t;
    cin >> t;
    init();
    while(t--) { 
        int n, k;
        cin >> n >> k;
        Try(n, k);
    }
}