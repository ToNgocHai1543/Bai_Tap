#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++ )
        a[i] = i + 1;
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((a[j] + k) % n != 0) cout << (a[j] + k) % n << " ";
            else cout << n << " ";
        }
        cout << endl;
        k++;
    }
}
