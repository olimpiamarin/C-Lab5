#include <iostream>
#include <cctype>
#include <cmath>

using namespace std;

//double suma(double a[], int n);

//void schimb(int &, int &);
/*
void schimba(int a[], int n);
int minim(int a[], int n);
*/
//int caut(double a[], int n, double valoare);

void initial(double [], int);

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
    /*
    double x[] = {1., 34., -234., 43., -12};
    cout << "Suma val. din sirul x este : " << suma(x, 5) << endl;
    return 0;
    */
    /*
    int a = 1, b = 7;
    cout << "La inceput a = " << a << " si b = " << b << endl;
    schimb(a, b);
    cout << "Dupa schimb() a = " << a << " si b = " << b << endl;
    return 0;
    */

    /*Creaţi un program care schimbă semnele elementelor negative
    dintr-un șir de valori numerice a și apoi determină
    valoarea minimă din șirul astfel obținut. Prelucrările se vor
    realiza în două funcții, schimba() și minim().*/

    /*
    int a[] = {12, -14, 7, 23, 5, -71, 4};
    schimba(a, 7); // in sir sunt 7 elemente
    int mini = minim(a, 7);
    cout << "Minimul valorilor dupa schimbarea semnelor este " << mini << endl;
    return 0;
    */

    /*Creaţi un program care realizează căutarea unei valori într-un
     șir de valori de tip double, dat. Căutarea se va realiza în funcția caut().*/
    /*
    double a[] = {12., -14., 7., 23., 5., -71., 4.};
    int rez = caut(a, 7, 23.); // in sir sunt 7 elemente
    if (rez < 0)
        cout << "Valoarea lipseste " << endl;
    else
        cout << "Valoarea s-a gasit pe pozitia : " << rez << endl;
    return 0;
    */

    double a[100];
    int nr;
    cout << "Numarul de elemente (mai mic sau egal cu 100): ";
    cin >> nr;
    initial(a, nr);

    for(int i = 0; i < nr; i++){
        cout << a[i] << ", ";
    }
    cout << endl;
    return 0;
}

/*
double suma (double a[], int n){
    double s = 0;
    int i;
    for (i = 0; i < n; i++)
        s = s + a[i];
    return s;
}
*/
/*
void schimb(int& x, int& y){
    int aux;
    aux = x;
    x = y;
    y = aux;
    return;
}
*/
/*
void schimba(int a[], int n){
    int i;
    for (i = 0; i < n; i++){
        if(a[i] < 0)
            a[i] = -a[i];
    }
}
int minim(int a[], int n){
    int i;
    int m = a[0];
    for(i = 1; i < n; i++){
        if(a[i] < m)
            m = a[i];
    }
    return m;
}
*/
/*
int caut(double a[], int n, double valoare){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] == valoare)
            return i;
    }
    return -1; // Nu s-a gasit
}
*/

void initial(double a[], int nr){
    for(int i = 0; i < nr; i++){
        a[i] = i + 1;
    }
}
