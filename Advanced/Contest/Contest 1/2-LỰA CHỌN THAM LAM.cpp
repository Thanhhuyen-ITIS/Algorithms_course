#include<bits/stdc++.h>

using namespace std;

#define fast() ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long

bool check(int n, int s){
    if(n == 0)
        return false;
    if(n > 1 && s == 0)
        return false;
    if(n * 9 < s)
        return false;
    return true;

}

string Max(int n, int s) {
    string ans = "";
    for (int i = 0; i < s / 9; ++i) 
        ans += "9";
    if(s % 9)
        ans += to_string(s % 9);
    while(ans.size() < n)
        ans += "0";
    return ans;
}

string Min(string s, int n) {
    string minn = "";
    for (int i = s.size() - 1; i >= 0; i--)
        minn.push_back(s[i]);
    if(minn[0] == '0')
        for (int i = 1; i < minn.size(); i++) {
            if(minn[i] != '0') {
                minn[i] -= 1;
                minn[0] = '1';
                break;
            }
        }
    return minn;
}
int main() {
    fast();
    int n, s;
    cin >> n >> s;
    if(!check(n, s)) {
        cout << "-1 -1";
        return 0;
    }
    string maxx = Max(n, s);

    cout << Min(maxx, n) << " " << maxx;
}
