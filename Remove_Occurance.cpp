#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string s = "axxxxyyyyb";
    string part = "xy";

    for(int i=0; i<s.size(); i++) {
        if(s.find(part) < s.length()){
            s = s.erase(s.find(part), part.length());
        }
    }

    cout << s << " ";
}