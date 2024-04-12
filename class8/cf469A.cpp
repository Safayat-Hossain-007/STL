#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int p;
    cin >> p;
    set<int> x;
    for(int i = 0; i < p; i++) {
        int a;
        cin >> a;
        x.insert(a);
    }
    
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int b;
        cin >> b;
        x.insert(b); // Using x to store both X and Y levels
    }
    
    // Check if Little X and Little Y together can pass all levels
    if (x.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
