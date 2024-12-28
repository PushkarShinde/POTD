#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int i=0;
    vector<long long>n(t);
    while (t--) {
        cin>>n[i];
        i++;
    }
    for(auto num: n){
        int k = 0, j=1;
        while(num%j==0){
            j++;
            k++;
        }
        cout << k << endl;
    }
    return 0;
}
