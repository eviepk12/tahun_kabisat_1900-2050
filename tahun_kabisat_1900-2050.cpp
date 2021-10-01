#include <iostream>

using std::cout;
using std::cin;

int main () 
{

    cout << "\n Tahun kabisat dari 1900-2050 \n";

    for (int i = 1900; i<=2050; i++)
    {
        if ((i % 400==0) || (i % 4==0 && i % 100!=0))
        {
            cout << i << " ";
        }
    }

    cin.get();
    return 0;
}