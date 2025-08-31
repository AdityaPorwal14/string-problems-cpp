#include <iostream>
#include <string>
#include <vector>
using namespace std;

string int_to_roman(int num) {
    vector <int> values = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector <string> symbols = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    string roman = "";
    for(int i=0; i<values.size(); i++) {
        while(num>=values[i]) {
            roman += symbols[i];
            num -= values[i];
        }
    }

    return roman;
}

int main() {
    int num;
    cout << "enter number";
    cin >> num;

    cout << int_to_roman(num);
}