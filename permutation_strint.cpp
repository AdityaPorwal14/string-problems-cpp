#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool checkequal(int a[26], int b[26]) {
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

bool checkinclusion(string s1, string s2) {
    int count1[26] = {0};

    // Count frequency of s1
    for (int i = 0; i < s1.length(); i++) {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int windowsize = s1.length();
    int count2[26] = {0};

    // First window
    int i = 0;
    while (i < windowsize && i < s2.size()) {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkequal(count1, count2)) {
        return true;
    }

    // Sliding window
    while (i < s2.length()) {
        char newchar = s2[i];
        count2[newchar - 'a']++;

        char oldchar = s2[i - windowsize];
        count2[oldchar - 'a']--;

        if (checkequal(count1, count2)) {
            return true;
        }

        i++; // move window forward
    }

    return false; // return false if no permutation found
}

int main() {
    string s1, s2;
    cout << "Enter s1: ";
    cin >> s1;
    cout << "Enter s2: ";
    cin >> s2;

    cout << (checkinclusion(s1, s2) ? "true" : "false") << endl;
    return 0;
}
