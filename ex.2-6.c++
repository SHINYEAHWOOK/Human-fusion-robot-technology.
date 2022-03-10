#include <iostream>
using namespace std;

int main() {
    cout << "Enter your address." << endl;

    char address[100];
    cin.getline(address, 100, '\n');

    cout << "address is" << address << ".\n";
}