#include <iostream>
using namespace std;

void checkTriangle(int a, int b, int c)
{
    if (a == b && b == c)
        cout << "\nEs un triangulo Equilatero" << endl;
    else if (a == b || b == c || c == a)
        cout << "\nEs un triangulo Isosceles" << endl;
    else
        cout << "\nEs un triangulo Escaleno" << endl;
}

int main()
{
    int a, b, c;
    cout << "\nPrimer lado: "; cin >> a;
    cout << "\nSegundo lado: "; cin >> b;
    cout << "\nTercer lado: "; cin >> c;

    checkTriangle(a, b, c);
 
    return 0;
}