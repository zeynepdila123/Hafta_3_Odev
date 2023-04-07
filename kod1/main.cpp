#include <iostream>

using namespace std;

int main()
{
    float R,r,alan,cevre,pi;
    pi = 3.14;
    cout<<"Yaricapi Girin: ";
    cin>>r;
    R = 2*r;
    alan=pi*r*r;
    cevre=R*pi;
    cout<<"Alan: "<<alan<<endl;
    cout<<"Cevre: "<<cevre;
    return 0;
}
