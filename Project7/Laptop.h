#pragma once
#ifndef LAPTOP_H
#define LAPTOP_H

class Laptop {
private:
    char* model;
    char* color;
    double price;

public:
    Laptop(const char* m, const char* c, double p);

    Laptop(const Laptop& other);

    ~Laptop();

    void Print() const;
};

#endif