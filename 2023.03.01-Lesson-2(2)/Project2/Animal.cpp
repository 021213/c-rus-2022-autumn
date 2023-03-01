#include"Animal.h"

Animal::~Animal()
{
}

AnimalType Animal::getType()
{
	return type;
}
int Animal::getAge()
{
	return age;
}
void Animal::setAge(int age)
{
	if (age > 0)
	{
		this->age = age;
	}
}
void Animal::elder()
{
	age++;
}