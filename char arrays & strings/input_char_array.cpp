#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char sentence[30];
    cout << "enter any sentence : ";
    cin >> sentence;

    cout << "your word was : " << sentence << endl;
    cout << "your word length is : " << strlen(sentence) << endl;

    return 0;
}