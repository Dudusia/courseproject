#ifndef PRODUCTS_H
#define PRODUCTS_H
#include <string>
#include <vector>

using namespace std;

class Products
{
public:
    Products();
    Products(string name);
    virtual ~Products();

    // getters and setters
    virtual void setName(string name) const;
    virtual string getName() const;

    virtual void setIngredients() const;
    virtual void getIngredients(vector<string> &ingredients) const;

    virtual void setPrice() const;
    virtual void setPrice(float price) const;
    virtual float getPrice() const;

    virtual void setPreparationTime() const;
    virtual int getPreparationTime() const;

    virtual void setAllergens() const;
    virtual void getAllergens(vector <string> &allergens) const;

    virtual void setType() const;
    virtual void setType(string name) const;
    virtual string getType() const;

    virtual void setPercentage() const;
    virtual void setPercentage(float per) const;
    virtual float getPercentage() const;

    virtual void setAmount() const;
    virtual void setAmount(float a) const;
    virtual float getAmount() const;

    virtual void display() const;

protected:
    string name;
    float price;
    int preparationTime;
    float percentage;
    string typeOfAlc;
    float amountOfAlc;
    vector <string> allergens;
    vector <string> ingredients;
};

#endif //PRODUCTS_H
