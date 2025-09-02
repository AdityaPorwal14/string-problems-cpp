#include<iostream>
#include<string>
using namespace std;

int main() {

    string str = "test";
    int ans = 0;

    for(int i=0; i<str.size(); i++) {
        int count = 0;
        for(int j=i; j<str.size(); j++) {
            if(str[i] == str[j]) {
                count ++;
            }
        }

        ans = max(ans,count);
    }

    cout << ans;
}