#include<bits/stdc++.h>

using namespace std;

#define fast() ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long

string lamTron(ll n) {
    ll cnt = 0;
    string ans = "";
    while(n > 9) {
        ans += "0";
        if(n % 10 + cnt >= 5)
            cnt = 1;
        else
            cnt = 0;
        n /= 10;
    }
    ans = to_string(n + cnt) + ans;
    return ans;
}

int main(){
    fast();
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        cout << lamTron(n) << endl;
    }
}