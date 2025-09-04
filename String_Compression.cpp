#include <iostream>
#include <string>
using namespace std;

string compressString(string s) {
    string result = "";
    int n = s.length();

    for (int i = 0; i < n; i++) {
        int count = 1;
        
        while (i < n - 1 && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        result += s[i];         
        result += to_string(count);
    }
    return result;
}

int main() {
    string s = "aaabbcddd";
    cout << "Original: " << s << endl;
    cout << "Compressed: " << compressString(s) << endl;
    return 0;
}
