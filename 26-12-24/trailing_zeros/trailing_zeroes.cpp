#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, count=0;
    cin >> num;
    while(num!=0){
        count+=num/5;
        num/=5;
    }
    cout << count;
    return 0;
}