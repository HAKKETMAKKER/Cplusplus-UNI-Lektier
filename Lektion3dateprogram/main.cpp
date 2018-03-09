#include <iostream>
#include "date.h"
#include "person.h"
using namespace std;

int main(){
    Date d(700000000);


    Person p("Toke", "Uth-Andersen");
    p.setAddress("Odense");
    p.setCountry("Denmark");
    p.setDate(d);
    p.setGender('M');
    cout << p.toString() << endl;
    return 0;
}
