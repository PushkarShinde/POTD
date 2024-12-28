#include <bits/stdc++.h>
using namespace std;

int divisor(long long num){

}

int main() {
    int t;
    cin >> t;
    vector<long long>nums;
    for(int i=0;i<t;i++){
        cin >> nums[i];
    }
    for(int i: nums){
        cout << divisor(i) << "\n";
    }
    return 0;
}