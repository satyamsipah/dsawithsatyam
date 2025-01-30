#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char ch = 'a';
    char ch1 = 'A';
    char ch2 = 'f';
    int pos = ch2 - 'a';

    char work[] = {'c', 'o', 'd', 'e'};
    char work1[] = {'c', 'o', 'd', 'e', '\0'};
    char work2[50] = {'c', 'o', 'd', 'e','\0'};
    char work3[50] = {'c', 'o', 'd', 'e'};
    cout << (int) ch << endl;
    cout << (int) ch1 << endl;
    cout << pos << endl;

    cout << work << endl;
    cout << work1 << endl;
    cout << strlen(work2) << endl;
    cout << strlen(work3) << endl;

    return 0;
}
