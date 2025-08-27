#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "1.1.1.1";
    int start = 0;
    string ans;

    while(start<str.size()) {
        if(str[start] == '.') {
            ans += "[.]";
        }

        else {
            ans += str[start];
        }

        start++;
    }

    cout << ans << endl;
}