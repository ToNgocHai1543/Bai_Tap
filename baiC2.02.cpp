#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n][n];
    memset(a, 1, sizeof a);
    int i = 1;
    while (i < n)
    {
        for (int j = 0; j < i; j++)
        {
            a[i][j] = 0;
        }
        i++;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0;j < n; j++) {
            if (a[i][j] == 0) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}
