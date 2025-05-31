//string shortcut
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "satyam"; //declare a string
    string str(3,'a'); //initialize with 3 copies of a
    cout << str << endl;
    string str1(5,'1'); //print 1 upto 5 times
    cout << str1 << endl;

    cout << s.length() << endl; //6
    cout << s.size() << endl; //6
    cout << s.front() << endl; //s
    cout << s.back() << endl; //m
    cout << s[0] << endl; //s
    cout << s[1] << endl; //a
    cout << s.at(0) << endl; //s
    cout << s.at(1) << endl; //a
    cout << s.empty() << endl; //0 => false, 1 => true

    s.push_back('a'); //7
    cout << s.size() << endl; 
    s.pop_back(); //6
    cout << s.size() << endl;

    for(int i=0; i<s.size(); i++) {
        cout << s[i] << ",";
    }
    cout << endl;

    string s1 = "satyam";
    cout << s1.erase(3,3) << endl; // or u can use any n of char like cout << s1.erase(3,10) << endl; but this is not good
    cout << s1 << endl; //sat

    cout << s.erase(2,2) << endl; //sa //remove an exact char from a string
    cout << s.insert(2,"tyam") << endl; //satyam  //add this char at index 2 which is present in double quotes 
    cout << s.replace(2,3,"a") << endl; //saam   //replace double quotes value from at index 2 upto 3 char

    s = "satyam";
    cout << s << endl; //satyam
    cout << s.find("a") << endl; //1 => first occurance index
    cout << s.find("at") << endl; //1 => count at index as index 1
    cout << s.find("z") << endl; //returns string::npos if not found
    cout << s.rfind("a") << endl; //4 => last occurance index
    cout << s.substr(2,4) << endl; //tyam => to get substring this is ok but generally write {s.substr(2)}

    string s2 = "1324"; 
    string s3 = "apple";
    int num = 101;

    int m = stoi(s2);
    cout << m << endl; //1324 => converting string to integer
    string str3 = to_string(num);
    cout << str3 << endl; // 101 => convert int to string

    reverse(s2.begin(), s2.end());
    cout << s2 << endl; //4231
    sort(s3.begin(), s3.end());
    cout << s3 << endl; //aelpp

    s2 = "23145";
    s3 = "aeroplane";

    reverse(s2.begin(), s2.end());
    cout << s2 << endl; //54132
    sort(s3.begin(), s3.end());
    cout << s3 << endl; //aaeelnopr

    s3 = "KinG";
    for(int i=0; i<s3.length(); i++) {
    s3[i] = toupper(s3[i]);
    }
    cout << s3 << endl; //KING

    string s4 = "Satyam";
    string s5 = "Satyam";
    transform(s4.begin(), s4.end(), s4.begin(), ::toupper); //SATYAM => to convert into upper case
    cout << s4 << endl;
    transform(s5.begin(), s5.end(), s5.begin(), ::tolower); //satyam => to convert into lower case
    cout << s5 << endl;

    string s6 = "satyam"; 
    s6.erase(remove(s6.begin(), s6.end(), 'a'), s6.end()); //stym => remove all occurance of a string
    cout << s6 << endl;

    string s7 = "satyam";
    sort(s7.begin(), s7.end());
    s7.erase(unique(s7.begin(), s7.end()), s7.end());
    cout << s7 << endl; //amsty => remove duplicates


    return 0;
}