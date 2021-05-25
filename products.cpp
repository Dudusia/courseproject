#include <iostream>
#include "products.h"

Products::Products(string name) : name(name) {}
Products::Products() {}
Products::~Products() {}

// getters and setters
void Products::setName(string name) const
{}

string Products::getName() const
{}

void Products::setIngredients() const
{}

void Products::getIngredients(vector<string> &ingredients) const
{}

void Products::setPrice() const
{}

void Products::setPrice(float price) const
{}

float Products::getPrice() const
{}

void Products::setPreparationTime() const
{}

int Products::getPreparationTime() const
{}

void Products::setAllergens() const
{}

void Products::getAllergens(vector <string> &allergens) const
{}

void Products::setType() const
{}

void Products::setType(string name) const
{}

string Products::getType() const
{}

void Products::setPercentage() const
{}

void Products::setPercentage(float per) const
{}

float Products::getPercentage() const
{}

void Products::setAmount() const
{}

void Products::setAmount(float a) const
{}

float Products::getAmount() const
{}

void Products::display() const
{}
