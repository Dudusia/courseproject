#include <iostream>
#include "dishes.h"

//namespace Records {
Dishes::Dishes (string iname) {
    name = iname;
}

void Dishes::setName(string name) {
    this->name = name;
}

string Dishes::getName() {
    return name;
}

void Dishes::setIngredients() {
    if (!ingredients.empty()) {
        ingredients.clear();
    }
    string ingredient;
    cout << "Ingredients: ";
    while (getline(cin, ingredient) && ingredient != ";") {
        ingredients.push_back(ingredient);
    }
}

void Dishes::getIngredients(vector<string> &ingredients) {
    for (auto i : this->ingredients) {
        ingredients.push_back(i);
    }
}

void Dishes::setPrice() {
    cout << "Price: ";
    float price;
    cin >> price;
    this->price = price;
}

float Dishes::getPrice() {
    return price;
}

void Dishes::setPreparationTime() {
    int preparationTime;
    cout << "Preparation time: ";
    cin >> preparationTime;
    this->preparationTime = preparationTime;
}

int Dishes::getPreparationTime() {
    return preparationTime;
}

void Dishes::setAllergens() {
    if(!allergens.empty())
        allergens.clear();

    cout << "Allergens: ";
    string allergen;
    while (getline(cin, allergen) && allergen != ";") {
        allergens.push_back(allergen);
    }
}

void Dishes::getAllergens(vector<string> &allergens) {
    for (auto i : this->allergens) {
        allergens.push_back(i);
    }
}

void Dishes::display() {
    cout << "Name:"  << name << endl << "Price: " << price << endl << "Preparation time: " << preparationTime << endl;

    cout << "Allergens: ";
    for (string allergen : allergens)
        cout << allergen << " ";
    cout << endl;

    cout << "Ingredients: ";
    for (string ingredient : ingredients)
        cout << ingredient << " ";
    cout << endl;
}

