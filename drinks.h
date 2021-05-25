#ifndef DRINKS_H
#define DRINKS_H
#include <string>
#include <vector>
#include <memory>
#include "products.h"

using namespace std;


class Drinks : public Products
{
public:
    Drinks() = default;
    Drinks(string iname);

    // getters and setters
    void setName(string name);
    string getName();

    void setPrice();
    void setPrice(float price);
    float getPrice();

    void setType();
    void setType(string name);
    string getType();

    void setPercentage();
    void setPercentage(float per);
    float getPercentage();

    void setAmount();
    void setAmount(float a);
    float getAmount();

    Drinks operator+(Drinks &obj);

    void display();
};

#endif //DRINKS_H
