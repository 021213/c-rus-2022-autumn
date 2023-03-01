#pragma once
#include<string>

enum AnimalType
{
	None = 0,
	Dog = 1,
	Cat = 2,
	Bird = 3,
	Fish = 4
};

class Animal
{
private:
	AnimalType type;
	int age;

public:
	std::string name;

	Animal(std::string name = "", AnimalType type = None, int age = 1) :
		name(name),
		type(type),
		age(age) {}
	
	Animal(const Animal& animal) :
		name(animal.name),
		type(animal.type),
		age(animal.age) {}
	
	~Animal();
	AnimalType getType();
	int getAge();
	void setAge(int age);
	void elder();
};