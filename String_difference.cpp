#include<iostream>
#include<vector>
using namespace std;

 char findTheDifference(string s, string t) {
       vector<int>freq(26,0);
       for(char ch : s){
            freq[ch-'a']++;
       }

       for(char ch : t) {
            freq[ch-'a']--;
       }

       for(int i=0; i<freq.size(); i++){
            if(freq[i]<0){
                return 'a'+ i;
            }
       }

       return ' ';
    }

int main(){
    string s = "abc";
    string t = "cabd";
    cout<<findTheDifference(s,t);
}