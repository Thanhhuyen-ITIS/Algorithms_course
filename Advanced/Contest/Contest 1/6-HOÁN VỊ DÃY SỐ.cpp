#include<bits/stdc++.h>
using namespace std;
int n, A[12], B[12], a[100];
void in(){
    for(int i = 1; i <= n; i++){
        cout << a[A[i]] << " ";
    }
    cout << endl;
}

void Try(int i){
    int j;
    for(j = 1; j <= n; j++){
        if(B[j] == 0){
            A[i] = j;
            B[j] = 1;
            if(i == n) in();
            else Try(i+1);
            B[j] = 0;
        }
    }
}
main(){
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    Try(1);
}
