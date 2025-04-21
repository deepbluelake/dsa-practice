#include <iostream>
using namespace std;

bool isPalindrome(string s, int start, int end)
{

    if (start >= s.length() / 2)
    {
        return true;
    }

    if (s[start] == s[end])
    {
        return isPalindrome(s, start + 1, end - 1);
    }

    else
        return false;
}

int main()
{
    string s;
    cin >> s;
    cout << isPalindrome(s, 0, s.length() - 1) << endl;

    return 0;
}

// bool isPalindrome(string str, int start, int end){
//     if(start >= str.length()/2){
//         return true;
//     }

//     if(str[start] == str[end]){
//         return isPalindrome(str, start++, end--);
//     }

//     else return false;

// }

// Incorrect increment/decrement in the second if statement:
// The code attempts to increment and decrement start and end within the function call.
// This doesn't work as expected because you're attempting to change the values of variables passed by value.
// In C++, arguments passed by value create a copy of the original variables.
// Any changes made to the copied values within the function won't affect the original variables.
