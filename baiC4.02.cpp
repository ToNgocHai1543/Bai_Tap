#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n] [2*n - 1];
    memset(a , 1, sizeof a);
    int l = n - 2;
    int r = n ;
    int k = n - 1;
    while (l >= 0) {
        for (int i = 0; i <= l; i++) {
            a[k][i] = 0;
            a[k][i + r] = 0;
        }
        l--; r++; k--;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0;j < 2 * n - 1; j++) {
            if (a[i][j] == 0) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}
