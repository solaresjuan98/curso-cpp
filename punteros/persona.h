#include <iostream>
#include <string.h>
#pragma once
using namespace std;

class Persona
{
private:
    int id;
    string name;
    int *location = &id;

public:
    Persona();
    Persona(int, string);
    ~Persona();

    void setData(int, string);
    int getID();
    string getName();
    void getLocation();
};

Persona::Persona()
{
}

void Persona::setData(int _id, string _name)
{
    id = _id;
    name = _name;
    location = &id;
}

int Persona::getID()
{
    return id;
}

string Persona::getName()
{
    return name;
}

void Persona::getLocation()
{
    cout << " Location: "<<location<<endl;;
}

Persona::~Persona()
{
}