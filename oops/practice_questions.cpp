#include <iostream>
using namespace std;

class User {
    int id;
    string password;

public:
    string username;
    User(int id) {
        this->id = id;
    }
    //getter
    string getPassword() {
        return password;
    }
    //setter
    void setPassword(string password) {
        this->password = password;
    }
};

int main() {
    User User1(101);
    User1.username = "satyam";
    User1.setPassword("abced");

    cout << "username : " << User1.username << endl;
    cout << "password : " << User1.getPassword() << endl;
    return 0;
}