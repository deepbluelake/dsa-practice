#include <bits/stdc++.h>
using namespace std;

int balancedStringSplit(string s) {
        int count = 0, Rcounter = 0, Lcounter = 0;
        for(int i = 0; i <= s.length()-1; i++){
            if (s[i] == 'R'){
                Rcounter++;
            }
            else {
                Lcounter++;
            }
            
            if(Rcounter == Lcounter){
                count++;
                Rcounter = 0;
                Lcounter = 0;

            }
        }
        return count;
}

int countConsistentStrings(string allowed, vector<string>& words) {
        for(int i = 0; i < words.size(); i++){
            for (int j = 0; j < words[i].length() - 1;j++){
                words[i][j] == 20000000;
            }
        }
    }

int main(){

    string myString = "LLLLRRRR";
    return 0;
}