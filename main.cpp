#include <iostream>
#include <stdexcept>
#include <string>
#include "Database.h"
using namespace std;
using namespace Records;

int displayMenu();
void doAddDish(Database* db);
void deleteDish(Database* db);
Dishes searchDish(Database* db);
void doAddDrink(Database* db);
void deleteDrink(Database* db);
Drinks searchDrink(Database* db);
Drinks createDrink(Database* db);

int main()
{
    Database List;
    bool done = false;
    string target;
    while (!done) {
        int selection = displayMenu();
        switch (selection) {
            case 0:
                done = true;
                break;
            case 1:
                doAddDish(&List);
                break;
            case 2:
                deleteDish(&List);
                break;
            case 3:
                searchDish(&List).display();
                break;
            case 4:
                List.displayAllDishes();
                break;
            case 5:
                cout << "Target: ";
                cin >> target;
                List.changeDish(target);
                break;
            case 6:
                cout << "Number of dishes: " << List.getNumberOfDishes() << endl;
                break;
            case 7:
                doAddDrink(&List);
                break;
            case 8:
                deleteDrink(&List);
                break;
            case 9:
                searchDrink(&List).display();
                break;
            case 10:
                List.displayAllDrinks();
                break;
            case 11:
                cout << "Target: ";
                cin >> target;
                List.changeDrinks(target);
                break;
            case 12:
                cout << "Number of drinks: " << List.getNumberOfDrinks() << endl;
                break;
            case 13:
                createDrink(&List).display();
                break;
            default:
                cerr << "Unknown command." << endl;
                break;
        }
    }
}

int displayMenu()
{
    cout << endl
         << "Employee Database" << endl
         << "-----------------" << endl
         << "1) Add new dish" << endl
         << "2) Delete the dish" << endl
         << "3) Search for the dish" << endl
         << "4) List all dishes" << endl
         << "5) Change the dish's data" << endl
         << "6) Get the number of dishes" << endl
         << "7) Add new drink" << endl
         << "8) Delete the drink" << endl
         << "9) Search for the drink" << endl
         << "10) List all drinks" << endl
         << "11) Change the drink's data" << endl
         << "12) Get the number of drinks" << endl
         << "13) Create your own drink" << endl
         << "0) Quit" << endl << endl;
    cout << "--->";
    int selection;
    cin >> selection;
    return selection;
}

void doAddDish(Database* db)
{
    string name;
    cout << "Name: ";
    cin >> name;
    db -> addDish(name);
}

void deleteDish(Database* db)
{
    string dish;
    cout << "Name of a dish to delete: ";
    cin >> dish;
    db -> deleteDish(dish);
}

Dishes searchDish(Database* db)
{
    string name;
    cout << "Dish name: ";
    cin >> name;
    Dishes dish = db -> getDish(name);
    return dish;
}

void doAddDrink(Database* db)
{
    string name;
    cout << "Name: ";
    cin >> name;
    db -> addDrinks(name);
}

void deleteDrink(Database* db)
{
    string dish;
    cout << "Name of a dish to delete: ";
    cin >> dish;
    db -> deleteDrinks(dish);
}

Drinks searchDrink(Database* db)
{
    string name;
    cout << "Drink name: ";
    cin >> name;
    Drinks drink = db -> getDrinks(name);
    return drink;
}

Drinks createDrink(Database* db)
{
    int selection;
    cout << "1) Choose from existing drinks" << endl
         << "2) Add your drinks and create based on them" << endl
         << "--->";

    cin >> selection;

    if(selection == 2)
    {
        doAddDrink(db);
        doAddDrink(db);
    }
    Drinks drink1 = searchDrink(db);
    Drinks drink2 = searchDrink(db);
    return db -> addDrinks(drink1 + drink2);
}
