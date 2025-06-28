#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string word;
    cout << "Enter a word: ";
    cin >> word;

    string reversed = word;
    reverse(reversed.begin(), reversed.end());

    if(word == reversed)
    cout << word << " is a pallindrome!" << endl;
    else
    cout << word << " is not a pallindrome!" << endl;

    return 0;
}