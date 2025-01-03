#include <bits/stdc++.h>
using namespace std;

/**
 * A helper function to calculate the greatest common divisor (GCD) of two integers using the Euclidean Algorithm:
 * if 𝑏=0, return 𝑎. Otherwise, recursively call gcd(b, a % b).
 * This function is used to compute the GCD of cycle lengths.
 */
int gcd(int a, int b){
    if(b==0){
        return a;
    } else{
        return gcd(b,a%b);
    }
}

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>p(n);
        for (size_t j = 0; j < n; j++){
            cin>> p[j];
            --p[j]; // Convert from 1-based indexing (input) to 0-based indexing for easier array manipulation.
        }
        
    }

    return 0;
}