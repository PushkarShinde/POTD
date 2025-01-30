//the sky is blue

#include <bits/stdc++.h>
using namespace std;

string solve(string s){
    vector<string>str;
    int c=0;
    for(size_t i=0;i<s.length();i+=c){
        if(s[i]!=' '){
            for (size_t j = i; j < s.length(); j++){
                if(s[j]==' '){
                    str.push_back(s.substr(i,j-i));
                } else{
                    c++;
                }
            }
        } else if (s[i]==' '){
            continue;
        }      
    }
    string result;
    for (size_t k = str.size()-1; k >=0; k--){
        if(k==str.size()-1){
            result+=str[k];
        }else{
            result+= str[k]+" ";
        }
    }
    return result;
}

int main() {
    cout << solve("the sky is blue");
    return 0;
}