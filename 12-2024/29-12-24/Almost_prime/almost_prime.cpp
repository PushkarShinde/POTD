#include <bits/stdc++.h>
using namespace std;

vector<int>prime_factors(int a){
    vector<int>factors;
    for(size_t i=2;i*i<=a;i++){
        while(a%i==0){
            factors.push_back(i);
            a/=i;
        }
    }
    if(a>1){
        factors.push_back(a);
    }
    return factors;
}

int main() {
    int num;
    cin >> num;
    int count=0;
    for (size_t i = 1; i <= num; i++){
        vector<int> factors=prime_factors(i);
        set<int>dfactors(factors.begin(),factors.end());
        if(dfactors.size()==2){
            count++; 
        } 
    }
    cout << count;
    return 0;
}