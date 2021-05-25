#ifndef DATABASE_H
#define DATABASE_H
#include <iostream>
#include <vector>
#include "dishes.h"
#include "drinks.h"

namespace Records {

	class Database
	{
	public:
		Dishes addDish(string name);
		Dishes getDish(string name);
		void displayAllDishes();
		int getNumberOfDishes();
		void changeDish(string target);
		void deleteDish(string name);

		Drinks addDrinks(string name);
		Drinks addDrinks(Drinks theDrink);
    Drinks getDrinks(string name);
    void displayAllDrinks();
    int getNumberOfDrinks();
    void changeDrinks(string target);
    void deleteDrinks(string name);

	private:

		vector <Dishes> mDishes;
		vector <Drinks> mDrinks;
	};
}

#endif //DATABASE_H
