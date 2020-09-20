#include <iostream>
using namespace std;

class Animal
{
private:
    string name;
    double height;
    double weight;
    static int totalAnimals;

public:
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    double getHeight()
    {
        return height;
    }
    void setHeight(double height)
    {
        this->height = height;
    }
    double getWeight()
    {
        return weight;
    }
    void setWeight(double weight)
    {
        this->weight = weight;
    }

    static int getTotalAnimals()
    {
        return totalAnimals;
    }

    Animal(string, double, double);
    Animal();
    ~Animal();
    void print();
};
int Animal::totalAnimals = 0;
Animal::Animal(string name, double height, double weight)
{
    this->name = name;
    this->height = height;
    this->weight = weight;
    Animal::totalAnimals++;
}
Animal::Animal()
{
    this->name = " ";
    this->height = 0;
    this->weight = 0;
    Animal::totalAnimals++;
}

Animal::~Animal()
{
    cout << this->name << " is destroyed\n";
}
void Animal::print()
{
    cout << this->name << " is " << this->height << " cms tall and " << this->weight << " kgs in weight\n";
}

class Dog : public Animal
{
private:
    string sound = "bow";

public:
    void makeSound()
    {
        cout << "The dog " << this->getName() << " says " << this->sound << "\n";
    }

    Dog(std::string, double, double, std::string);

    Dog() : Animal(){};
    void print();
    // ~Dog();
};

Dog::Dog(string name, double height, double weight, string sound) : Animal(name, height, weight)
{
    this->sound = sound;
}

void Dog::print()
{

    std::cout << this->getName() << " is " << this->getHeight() << " cms tall, "
              << this->getWeight() << " kgs in weight and says " << this->sound << "\n";
}
int main()
{
    Animal fred;
    // dog.print();
    fred.setHeight(30);
    fred.setWeight(10);
    fred.setName("Freddy");
    fred.print();
    Dog tom("Tom", 100, 30, "Bow Bow");
    tom.print();
    cout << "\nNumber of animals are " << Animal::getTotalAnimals() << '\n';
}