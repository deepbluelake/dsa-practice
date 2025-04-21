#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch)
{

    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }

    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (toLowerCase(arr[s]) != toLowerCase(arr[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }

    return 1;
}

void reverseString(char arr[], int n)
{

    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(arr[s++], arr[e--]);
    }
}

int getLength(char arr[])
{

    int len = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

int main()
{

    char name[10] = "ABcba";
    cout << getLength(name) << endl;

    reverseString(name, getLength(name));
    cout << name << endl;

    cout << checkPalindrome(name, getLength(name)) << endl;
    cout << "toLowerXase: " << toLowerCase('j') << endl;
    cout << "toLowerXase: " << toLowerCase('M') << endl;
    cout << "toLowerXase: " << toLowerCase('k') << endl;
    cout << "toLowerXase: " << toLowerCase('G') << endl;
    cout << "toLowerXase: " << toLowerCase('U') << endl;
    cout << "toLowerXase: " << toLowerCase('P') << endl;

    return 0;
}
