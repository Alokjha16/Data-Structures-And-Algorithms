#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    cout << "Enter a string: ";
    string str;
    cin >> str;
    string rev = str;
    reverse(rev.begin(),rev.end());
    if (str == rev)
    {
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
    
    return 0;
}