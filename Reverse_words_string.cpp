#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

string reverse(string ch) {
    int start = 0;
    int end = ch.size()-1;

    while(start < end) {
        swap(ch[start], ch[end]);
        start++;
        end--;
    }

    return ch;
}

int main() {
    string str = "hello world";
    int size = str.size();
    string ans= "";
    string result= "";

    for(int i = 0; i <= size; i++) {

        if(str[i] == ' ' || str[i] == '\0'){

            result += reverse(ans) + " ";
            ans = "";
        }

        else {
            ans += str[i];
        }
    }

    cout << result;
}