#include <iostream>
#include <cstring>
#include "Laptop.h"

using namespace std;

Laptop::Laptop(const char* m, const char* c, double p) {
    model = new char[strlen(m) + 1];
    strcpy_s(model, strlen(m) + 1, m);

    color = new char[strlen(c) + 1];
    strcpy_s(color, strlen(c) + 1, c);

    price = p;
}

Laptop::Laptop(const Laptop& other) {
    model = new char[strlen(other.model) + 1];
    strcpy_s(model, strlen(other.model) + 1, other.model);

    color = new char[strlen(other.color) + 1];
    strcpy_s(color, strlen(other.color) + 1, other.color);

    price = other.price;
}

Laptop::~Laptop() {
    cout << "Destructor for " << model << endl;
    delete[] model;
    delete[] color;
}

void Laptop::Print() const {
    cout << "Model: " << model << "\tColor: " << color << "\tPrice: $" << price << endl;
}