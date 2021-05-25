#include <iostream>
#include <stdexcept>
#include "Database.h"

using namespace std;


ostream& operator<<(ostream& os, Dishes op2) {
    os << "Name: " << op2.getName() << endl
       << "Price: " << op2.getPrice() << endl
       << "Preparation time: " << op2.getPreparationTime() << endl;

    os << "Allergens: ";
    vector<string> allergens;
    op2.getAllergens(allergens);
    for (string allergen : allergens)
        os << allergen << " ";
    os << endl;

    os << "Ingredients: ";
    vector<string> ingredients;
    op2.getIngredients(ingredients);
    for (string ingredient : ingredients)
        os << ingredient << " ";
    os << endl;
    return os;
}

ostream& operator<<(ostream& os, Drinks& op2) {
    os << "Name: " << op2.getName() << endl
       << "Price: " << op2.getPrice() << endl
       << "Type: " << op2.getType() << endl
       << "Percentage: " << op2.getPercentage() << endl
       << "Amount: " << op2.getAmount() << endl;
    return os;
}

namespace Records
{
	Dishes Database::addDish(string name) {
		Dishes theDish(name);
		theDish.setPrice();
		theDish.setIngredients();
		theDish.setAllergens();
		theDish.setPreparationTime();
		mDishes.push_back(theDish);
		return mDishes[mDishes.size() - 1];
	}

	Dishes Database::getDish(string name)
	{
		for (Dishes dish : mDishes) {
			if (dish.getName() == name) {
				return dish;
			}
		}
		throw logic_error("No dish found.");
	}

    void Database::deleteDish(string name)
    {
	    bool found = false;
        for (int i = 0; i < mDishes.size(); i++) {
            if ((mDishes[i]).getName() == name) {
                found = true;
                mDishes.erase(mDishes.begin() + i);
                break;
            }
        }
        if(!found)
            throw logic_error("No dish found.");
    }

	void Database::displayAllDishes() {
		for (Dishes dish : mDishes) {
			cout << dish;
		}
	}

	void Database::changeDish(string target) {
        bool found = false;
        for (int i = 0; i < mDishes.size(); i++) {
            if ((mDishes[i]).getName() == target) {
                found = true;
                string name;
                cout << "Name: ";
                cin >> name;
                mDishes[i].setName(name);
                mDishes[i].setPrice();
                mDishes[i].setIngredients();
                mDishes[i].setAllergens();
                mDishes[i].setPreparationTime();
                break;
            }
        }
        if(!found)
            throw logic_error("No dish found.");
	}

	int Database::getNumberOfDishes() {
        return mDishes.size();
    }

    Drinks Database::addDrinks(string name) {
        Drinks theDrink(name);
        theDrink.setPrice();
        theDrink.setType();
        theDrink.setAmount();
        theDrink.setPercentage();
        mDrinks.push_back(theDrink);
        return mDrinks[mDrinks.size() - 1];
    }

    Drinks Database::addDrinks(Drinks theDrink) {
        mDrinks.push_back(theDrink);
        return mDrinks[mDrinks.size() - 1];
    }

    Drinks Database::getDrinks(string name)
    {
        for (Drinks drink : mDrinks) {
            if (drink.getName() == name) {
                return drink;
            }
        }
        throw logic_error("No dish found.");
    }

    void Database::deleteDrinks(string name)
    {
        bool found = false;
        for (int i = 0; i < mDrinks.size(); i++) {
            if ((mDrinks[i]).getName() == name) {
                found = true;
                mDrinks.erase(mDrinks.begin() + i);
                break;
            }
        }
        if(!found)
            throw logic_error("No drink found.");
    }

    void Database::displayAllDrinks() {
        for (Drinks drink : mDrinks) {
            cout << drink;
        }
    }

    void Database::changeDrinks(string target) {
        bool found = false;
        for (int i = 0; i < mDrinks.size(); i++) {
            if ((mDrinks[i]).getName() == target) {
                found = true;
                string name;
                cout << "Name: ";
                cin >> name;
                mDrinks[i].setName(name);
                mDrinks[i].setPrice();
                mDrinks[i].setType();
                mDrinks[i].setAmount();
                mDrinks[i].setPercentage();
                break;
            }
        }
        if(!found)
            throw logic_error("No dish found.");
    }

    int Database::getNumberOfDrinks() {
        return mDrinks.size();
    }
}
