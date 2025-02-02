#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char sentence[30];
    cout << "enter any sentence : ";
    cin.getline(sentence, 30, '.'); // dot is delimiter which is an optional argument

    cout << "your sentence is : " << sentence << endl;
    cout << "your sentence is : " << strlen(sentence) << endl;

    return 0;
}