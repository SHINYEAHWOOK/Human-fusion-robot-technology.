#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

class Finding_root_2nd_order_equation {
public:
     float coef_a;
     float coef_b;
     float coef_c;

     float root_1, root_2;


     int findingRoot(void);
         int getRoot(void);

     Finding_root_2nd_order_equation();
     ~Finding_root_2nd_order_equation();
};

int Finding_root_2nd_order_equation::findingRoot(void) {
    float sqrt_bb_4ac;

    if((coef_b*coef_b-4.0*coef_a*coef_c) > 0.0) {
        sqrt_bb_4ac = sqrt(coef_b*coef_b-4.0*coef_a*coef_c);
        root_1 = (-coef_b + sqrt_bb_4ac) / (2.0*coef_a);
        root_2 = (-coef_b - sqrt_bb_4ac) / (2.0*coef_a);
    }
    else {
        cout << "Not Computing" << endl;
    }
    return(0);
}

int Finding_root_2nd_order_equation::getRoot(void) {
    cout << "x1=" << root_1 << endl;
    cout << "x2=" << root_2 << endl;

    return(0);
}

Finding_root_2nd_order_equation::Finding_root_2nd_order_equation() {
    coef_a = 0.0;
    coef_b = 0.0;
    coef_c = 0.0;

    cout << "Object of Finding_root_2nd_order_equation is instantiated" << endl;
}

Finding_root_2nd_order_equation::~Finding_root_2nd_order_equation() {

    cout << "Object of Finding_root_2nd_order_equation is deleted" << endl;
}

int main() {
    Finding_root_2nd_order_equation FR2OEqu_1;

    cin >> FR2OEqu_1.coef_a;
    cin >> FR2OEqu_1.coef_b;
    cin >> FR2OEqu_1.coef_c;

    FR2OEqu_1.findingRoot();
    FR2OEqu_1.getRoot();

    Finding_root_2nd_order_equation * ptr_2OEqu = new Finding_root_2nd_order_equation;

    cin >> ptr_2OEqu->coef_a;
    cin >> ptr_2OEqu->coef_b;
    cin >> ptr_2OEqu->coef_c;

    ptr_2OEqu->findingRoot();
    ptr_2OEqu->getRoot();

    delete ptr_2OEqu;

    cout << "Programming is terminated" << endl;
}