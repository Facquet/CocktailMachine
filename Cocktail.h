//#include "Pin.h"

class Liquid{
protected:
std::string name_;
int PercentAlcohol_;
public:
Liquid(std::string name);
Liquid(std::string name,int PercentAlcohol);
std::string const GetName(void);

//int	GetPercentAlcohol(void);
//void	ChangePercentAlcohol(int newpercent);
};

class Cocktail{
protected:
std::string name_;
Liquid ingredient_[5];
int percentOfCocktail_[5]; // give the percent of each ingredient present in the drink

public:
//Cocktail() : ingredient_(5), percentOfCocktail_(5){}
bool ChangeName(std::string name);
bool AddIngredient(Liquid newliquid, int percent);
void RemoveIngredient(Liquid oldliquid);
void const ShowIngredient(void);
};

/*
class MaClasse
{
    std::vector<T> _v;
public:
    MaClasse() : _v(4) {}
};*/
