#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

void reverse(char word[], int n) {
    int st = 0, end = n-1;
    while(st < end) {
        swap(word[st], word[end]);
        st++;
        end--;
    }
    cout << word << endl;
}

int main() {
    char word[] = "code";
    reverse(word, strlen(word));

    return 0;
}