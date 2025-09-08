#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s = "geeksforgeeks";
    char ans = ' ';
    int size = s.size();

    for(int i=0; i<size; i++){
        int count = 0;
        for(int j=0; j<size; j++){
            if(s[i] == s[j]) {
                count++;

                }
            }

            if(count == 1) {
                ans = s[i];
                break;
            }

        }

        if(ans != ' ') {
            cout << ans;
        }

        else{
            cout << "no unique char";
        }

}