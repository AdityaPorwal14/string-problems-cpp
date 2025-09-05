#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal) {
    if (s.length() != goal.length()) return false;
    string doubled = s + s;
    return doubled.find(goal) != string::npos;
}

int main() {
    string s1 = "abcde", goal1 = "cdeab";
    cout << (rotateString(s1, goal1) ? "true" : "false") << endl;

    string s2 = "abcde", goal2 = "abced";
    cout << (rotateString(s2, goal2) ? "true" : "false") << endl;
}
