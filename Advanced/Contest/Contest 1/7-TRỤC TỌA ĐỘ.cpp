#include<bits/stdc++.h>

using namespace std;

#define fast() ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long

int n;

bool cmp(pair <int,int> a, pair <int, int> b) {
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

void process() {
    vector<pair<int, int>> vt(n);
    for (auto &x : vt) {
        cin >> x.first >> x.second;
    }
    sort(vt.begin(), vt.end(), cmp);
    int cnt = 0;
    int last_x = 0;
    for(auto x : vt) {
        if(x.first < last_x)
            continue;
        last_x = x.second;
        cnt++;
    }
    cout << cnt << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
         cin >> n;
        process();
    }
   
}