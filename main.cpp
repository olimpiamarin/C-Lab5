#include <iostream>
#include <cctype>
#include <cmath>

using namespace std;

double suma(double a[], int n);

int main()
{
    /*
    char rasp, varianta;
    double x;
    rasp = 'd';
    while (tolower(rasp) == 'd') {
        cout << "x = "; cin >> x;
        cout << "Ce doriti sa calculati: (s - sin, c - cons, t - tan)";
        cin >> varianta;
        switch(varianta){
        case 's' :
            cout << "sin = " << sin(3.14159 * x / 180.) << endl;
            break;
        case 'c' :
            cout << "cos = " << cos(3.14159 * x / 180.) << endl;
            break;
        case 't' :
            cout << "tan = " << sin(3.14159 * x / 180.) /
                                cos(3.14159 * x / 180.) << endl;
            break;
        default:
            cout << "Caracter incorect!";
        }
        cout << "Mai continuati? (d/n) : ";
        cin >> rasp;
    }
    return 0;
    */

    double x[] = {1., 34., -234., 43., -12};
    cout << "Suma val. din sirul x este : " << suma(x, 5) << endl;
    return 0;
}

double suma (double a[], int n){
    double s = 0;
    int i;
    for (i = 0; i < n; i++)
        s = s + a[i];
    return s;
}

