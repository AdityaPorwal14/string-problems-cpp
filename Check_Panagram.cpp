#include<iostream>
#include<string>
#include<vector>
using namespace std;

void checkpanagram(string sentences){
    vector<bool> alpha(26,0);

    for(int i = 0; i<sentences.size(); i++) {
        alpha[sentences[i] - 'a'] = 1;
    }

    for(int i = 0; i<26; i++) {
        if(alpha[i] == 0) {
            cout << "Not panagram";
            return;
        }
    }

    cout << "panagram";
}

int main() {
    string sentences;
    cout << "Enter the String: " <<endl;
    cin >> sentences;

    checkpanagram(sentences);
}