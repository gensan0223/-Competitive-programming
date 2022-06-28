#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i =0; i < n; i++) {
        cin >> vec[i];
    }
    int ans =0;
    bool result = true;
    while(result) {
        for (int i = 0; i < n; i++) {
            if (vec[i]%2 == 1) {
                result = false;
            }
            vec[i] /= 2;
        }
        if (result == true) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
