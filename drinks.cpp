#include <iostream>
#include "drinks.h"

Drinks::Drinks (string iname) {
    name = iname;
}

void Drinks::setName(string name) {
    this->name = name;
}

string Drinks::getName() {
    return name;
}

void Drinks::setPrice() {
    cout << "Price: ";
    float price;
    cin >> price;
    this->price = price;
}

void Drinks::setPrice(float price) {
    this->price = price;
}

float Drinks::getPrice() {
    return price;
}

void Drinks::setType() {
    string name;
    cout << "Type: ";
    cin >> name;
    typeOfAlc = name;
}

void Drinks::setType(string name) {
    typeOfAlc = name;
}

string Drinks::getType() {
    return typeOfAlc;
}

void Drinks::setPercentage() {
    float per;
    cout << "Percentage: ";
    cin >> per;
    percentage = per;
}

void Drinks::setPercentage(float per) {
    percentage = per;
}

float Drinks::getPercentage() {
    return percentage;
}

void Drinks::setAmount() {
    float a;
    cout << "Amount: ";
    cin >> a;
    amountOfAlc = a;
}

void Drinks::setAmount(float a) {
    amountOfAlc = a;
}

float Drinks::getAmount() {
    return amountOfAlc;
}

Drinks Drinks::operator+(Drinks &obj) {
    Drinks res;
    res.setName(name + " + " + obj.getName());
    res.setPrice(price + obj.getPrice());
    res.setType(typeOfAlc + " + " + obj.getType());
    res.setAmount(amountOfAlc + obj.amountOfAlc);
    res.setPercentage((percentage*amountOfAlc + obj.getPercentage()*obj.getAmount())/res.getAmount());
    return res;
}

void Drinks::display() {
    cout << "Name:"  << name << endl
         << "Price: " << price << endl
         << "Type: " << typeOfAlc << endl
         << "Percentage: " << percentage << endl
         << "Amount: " << amountOfAlc << endl;
}
