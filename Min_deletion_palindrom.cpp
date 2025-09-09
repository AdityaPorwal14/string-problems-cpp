#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
    if (s.size() != t.size()) return false;

    int mapS[256] = {0};  
    int mapT[256] = {0};

    for (int i = 0; i < s.size(); i++) {
        if (mapS[s[i]] == 0 && mapT[t[i]] == 0) {
            mapS[s[i]] = t[i];
            mapT[t[i]] = s[i];
        }
        else if (mapS[s[i]] != t[i] || mapT[t[i]] != s[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << (isIsomorphic("egg", "add") ? "true" : "false") << endl;   
    cout << (isIsomorphic("foo", "bar") ? "true" : "false") << endl;  
    cout << (isIsomorphic("paper", "title") ? "true" : "false") << endl;
}
