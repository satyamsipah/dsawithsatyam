#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(char str[], int n) {
    int st = 0, end = n-1;
    while(st < end) {
        if(str[st] != str[end]) {
            return false;
        }
        st++; // when if() return then you can not write updation in if() condition 
        end--;
    }
    return true;
}

int main() {
    char word[] = "madam";
    cout << isPalindrome(word, strlen(word)) << endl;

    return 0;
}