//solve a quadraticequation
#include <iostream>
#include <cmath>
using namespace std;

void QuadraticEquationOpgave(){
    double a, b, c, x1, x2, discriminant;
    string retry;
    do {
    cout << "Enter coefficients a, b and c of the equation: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (discriminant == 0) {
        cout << "roots are real and same." << endl;
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }
    else if (discriminant < 0) {
        cout << "The discriminant is a negative number so the equation has no soloutions." << endl;
    }
    cout << "Would you like to solve another equation? (y/n):" << endl;
    cin >> retry;
    }
    while (retry == "y" || retry == "Y");
}



int main(){
QuadraticEquationOpgave();
}
