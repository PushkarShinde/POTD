#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int m=240-k;
    int sum=0, i=0;   
    while(sum<=m && i<=n){
        ++i;
        sum+=(5*i);
    }
    cout<< i-1;
    return 0;
}