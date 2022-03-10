#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char password[11];
    cout << "Enter your password to exit the program." << endl;
    while(true) {
        cout << "password>>";
        cin >> password;
        if(strcmp(password,"c++") == 0) {
            cout << "Exit the program normally." << endl;
            break;
        }
        else
        cout << "The password is wrong~~" << endl;
    }
}