#include <iostream>
#include <string>
using namespace std;

int main() {
    string song("Falling in love with you");
    string elvis("Elvis Presley");
    string singer;

    cout << song + "The singer who sang this song is";
    cout << "Hint : The first letter is" << elvis[0] << ")?";

    getline(cin, singer);
    if(singer == elvis)
    cout << "That's right.";
    else
    cout << "Incorrect. It is" + elvis + "." << endl;
}