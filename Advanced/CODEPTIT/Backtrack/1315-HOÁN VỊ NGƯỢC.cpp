#include <bits/stdc++.h>

using namespace std;

int n, x[20], c[20];
void in(){
    for (int i = 1; i <= n; ++i)
        cout << x[i];
    cout << " ";
}
void Try(int i) {
    for (int j = n; j >= 1; --j) {
        if(c[j] == 0) {
            x[i] = j;
            c[j] = 1;
            if(i == n) in();
            else Try(i + 1);
            c[j] = 0;
        }
    }
} 
int main(){
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        Try(1);
        cout << endl;
    }
}