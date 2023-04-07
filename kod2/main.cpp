#include <iostream>

using namespace std;

int main()
{
    int sayi;
    cout<<"Sayi giriniz :";
    cin>>sayi;

    if(sayi%2 == 0)
    {
        if(sayi%4 == 0)
        {
            cout<<"Sayi 4'e bolunur.";
        }
        else
        {
            cout<<"Sayi 4'e bolunmez.";
        }
    }
    else
    {
        if(sayi%3 == 0)
        {
            cout<<"Sayi 3'e bolunur.";
        }
        else
        {
            cout<<"Sayi 3'e bolunmez.";
        }
    }
    return 0;
}
