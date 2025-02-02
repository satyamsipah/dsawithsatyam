#include <iostream>
#include <string.h>
using namespace std;

void toUpper(char word[], int n) {
    for(int i=0; i<n; i++) {
        char ch = word[i];
        if(ch >= 'a' && ch <= 'z') {
            continue;
        } else {
            word[i] = ch - 'A' + 'a';
        }
    }
    cout << word << endl;
}

int main() {
    char word[] = "ApPle";
    toUpper(word, strlen(word));

    return 0;
}