#include <iostream>
#include <string>
using namespace std;

int countSubstring(string s, int st, int end, int n) {
    if(st == n) {
        return 0;
    }
    if(end == n) {
        return countSubstring(s, st+1, st+1, n);
    }

    int count = (s[st] == s[end]) ? 1 : 0;
    return count + countSubstring(s, st, end+1, n);
}

int main() {
    string s = "aba";
    int n = s.size();
    cout << countSubstring(s, 0, 0, n) << endl;

    return 0;
}