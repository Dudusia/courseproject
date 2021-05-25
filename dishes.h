#ifndef DISHES_H
#define DISHES_H
#include <string>
#include <vector>
#include <iomanip>
#include "products.h"

using namespace std;


class Dishes : public Products
{
public:
    Dishes() = default;
    Dishes(string iname);

    // getters and setters
    void setName(string name);
    string getName();

    void setIngredients();
    void getIngredients(vector<string> &ingredients);

    void setPrice();
    float getPrice();

    void setPreparationTime();
    int getPreparationTime();

    void setAllergens();
    void getAllergens(vector <string> &allergens);

    void display();

};


#endif //DISHES_H
