#include<iostream>
#include<vector>
#include<string>
using namespace std;

void SortString(string s) {
    vector<int> alpha(26,0);
    string ans;

    for(int i=0; i<s.size(); i++) {
        alpha[s[i] - 'a'] ++;
    }

    for(int i=0; i<26; i++) {
        char c = 'a' + i;

        while(alpha[i]) {
            ans+=c;
            alpha[i]--;
        }
    }

    cout << ans;

}

int main() {
    string sentences;
    cout << "enter the sentences: ";
    cin >> sentences;
    SortString(sentences);
}