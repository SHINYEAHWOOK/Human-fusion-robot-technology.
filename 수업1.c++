#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;




int main() {

    int x1;
    int *px1;

    int array_x[5] = {0,11,22,33,44};



    float f1;
    float *ptr_f1;
    float f2;

    ptr_f1 = & f1;
    f1 = 12.3;
    f2 = *ptr_f1;


 
    x1 = 10;
    px1 = &x1;

    cout << endl;
    cout << "size of memory = " << sizeof(px1) << endl;
    cout << " x1 pointer [ address} " << px1 << endl;
    cout << "x1 = " << *px1 << endl;







    cout << endl;
    cout << "array_x[1] = " << array_x[1] << endl;
    cout << " *(array+1) = " << *(array_x+1) << endl;



}