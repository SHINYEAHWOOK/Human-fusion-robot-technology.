#include <iostream>
#include <math.h>

using namespace std;

int main() {

double a,b,c;

cout<<"Input a,b,c of ax^2+bx+c which you want to know its solution."<<endl;

cout<<"a : "; cin>>a;

cout<<"b : "; cin>>b;

cout<<"c : "; cin>>c;

if(pow(b,2)==4*a*c) 

cout<<"Double solution : "<<(-b/2);

else if(pow(b,2)>4*a*c)

{

cout<<"First solution : "<<((-b)+sqrt(pow(b,2)-4*a*c))/2<<endl;

cout<<"Second solution : "<<((-b)-sqrt(pow(b,2)-4*a*c))/2;

}

else if(b==0,pow(b,2)<4*a*c)

{

cout<<"First solution : "<<sqrt(4*a*c-(pow(b,2)))/2<<"i"<<endl;

cout<<"Second solution : "<<-sqrt(4*a*c-(pow(b,2)))/2<<"i";

}

else 

{

cout<<"First solution : "<<(-b)/2<<"+"<<sqrt(4*a*c-(pow(b,2)))/2<<"i"<<endl;

cout<<"Second solution : "<<(-b)/2<<"-"<<sqrt(4*a*c-(pow(b,2)))/2<<"i";

}}

