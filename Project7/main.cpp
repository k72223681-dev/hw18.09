#include <iostream>
#include "Laptop.h"
using namespace std;

int main() {
    Laptop laptop1("Dell XPS 13", "Silver", 999.99);
    Laptop laptop2("MacBook Pro", "Space Gray", 1299.99);
    Laptop laptop3("HP Spectre", "Black", 1099.99);

    cout << "Laptop Details:\n" << endl;
    laptop1.Print();
    laptop2.Print();
    laptop3.Print();
}