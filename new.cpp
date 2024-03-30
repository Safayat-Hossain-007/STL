#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int se = 0, de = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) // Sereja's turn
            se += v[n - 1 - i];
        else // Dima's turn
            de += v[n - 1 - i];
    }

    cout << se << " " << de << endl;

    return 0;
}
