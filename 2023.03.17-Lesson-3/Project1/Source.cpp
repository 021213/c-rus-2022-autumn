#include<iostream>
#include<string>

// 1. Абстракция
// 2. Инкапсуляция (public, private, protected, "default")
// 3. Наследование
// 4. ?

/*
	1. Любая программа работает на 3 типах операторов: линейные, ветвления и циклы.
	2. Всякие штуки типа функций, структур, классов, библиотек создаются с целью сократить количество кода.
	3. Хороший код обладает несколькими качествами:
		- он понятен. Он с документацией;
		- он самодостаточен;
		- он адекватен;
	4. S.O.L.I.D.

	MVC, MVVM

	DB <-> DAL <-> BL <-> UI
*/

enum AnimalType
{
	NONE,
	AIR,
	WATER,
	GROUND
};

class Animal
{
public:
	AnimalType type;
	std::string name;
	Animal(AnimalType type = NONE, std::string name = "Animal") :
		type(type), name(name)
	{
		std::cout << "Animal created " << type << " " << name << std::endl;
	}
	Animal(const Animal& animal) :
		type(animal.type), name(animal.name) {}
	~Animal() {
		std::cout << "Animal destructed " << type << " " << name << std::endl;
	}
	void print()
	{
		std::cout << "Basic animal " << type << " " << name << std::endl;
	}
};

class AirAnimal : public Animal
{
public:
	int altitude;

	AirAnimal(std::string name = "AIR", int altitude = 0) :
		Animal(AIR, name), altitude(altitude)
	{
		std::cout << "Air animal created " << type << " " << name << std::endl;
	}
	~AirAnimal()
	{
		std::cout << "Air animal destructed " << type << " " << name << std::endl;
	}

	void AirInteract()
	{
		///
	}

	void print()
	{
		std::cout << "Air basic animal " << type << " " << name << std::endl;
	}
};

class WaterAnimal : protected Animal
{
public:
	int depth;

	WaterAnimal(std::string name = "WATER", int depth = 0) :
		Animal(WATER, name), depth(depth)
	{
		std::cout << "Water animal created " << type << " " << name << std::endl;
	}
	~WaterAnimal()
	{
		std::cout << "Water animal destructed " << type << " " << name << std::endl;
	}

	void WaterInteract()
	{
		///
	}

	void print()
	{
		std::cout << "Water basic animal " << type << " " << name << std::endl;
	}
};

class DeepWaterAnimal : public WaterAnimal
{
public:
	bool veryDeep;

	void print()
	{
		Animal::print();
	}
};

class GroundAnimal
{
private:
	Animal internalAnimal;
public:
	void print()
	{
		return internalAnimal.print();
	}
};

int main(int argc, char* argv[])
{
	Animal a0;
	AirAnimal a1("Bob");
	WaterAnimal a2("John");
	std::cout << std::endl << std::endl;
	a0.print();
	a1.print();
	a2.print();
	((Animal)a1).print();
	a1.Animal::print();


	std::cout << std::endl << std::endl;
	
	a1.print();
	((Animal)a1).print();
	a1.Animal::print();
	//a2.Animal::print();

	std::cout << std::endl << std::endl;

	return EXIT_SUCCESS;
}