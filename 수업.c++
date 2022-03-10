#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;




int main() {

    int x1;
    int *px1;

    int array_x[5] = {0,11,22,33,44};

    
    x1 = 10;
    px1 = &x1;

    cout << endl;
    cout << " x1 pointer [ address} " << px1 << endl;
    cout << "x1 = " << *px1 << endl;



}