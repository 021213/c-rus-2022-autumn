#include<iostream>
#include<string>

enum AnimalType
{
	None = 0,
	Dog = 1,
	Cat = 2,
	Bird = 3,
	Fish = 4
};

union MixedVariable
{
	long long ll;
	double dd;
};

//class - по умолчанию все приватно, struct -  по умолчанию все публично
class Animal
{
private:
	AnimalType type;
	//int itype; //0 - none, 1 - dog, 2 - cat, 3 - bird, 4 - fish
	int age;

public:
	std::string name;

	Animal(std::string name = "", AnimalType type = None, int age = 1) :
		name(name), type(type), age(age) {}
	Animal(const Animal& animal) :
		name(animal.name), type(animal.type), age(animal.age) {}
	~Animal() {}
	AnimalType getType() { return type; }
	int getAge() { return age; }
	void setAge(int age)
	{
		if (age > 0) this->age = age;
	}
	void elder() { age++; }
};

int main(int argc, char* argv[])
{
	AnimalType t1 = Dog;
	AnimalType t2 = Cat;
	AnimalType t3 = Fish;
	//MixedVariable mv;
	//mv.ll = 23; mv.dd = 32.23;
	//for (int i = 0; i < 64; ++i)
	//{
	//	int bit = (mv.ll & (1 << (63 - i))) >> (63 - i);
	//	std::cout << bit;
	//}
	//std::cout << std::endl;
	Animal animal1("Bob", Fish, 5);

	if (animal1.getType() == Dog) { std::cout << "Woof!" << std::endl; }

	//animal1.type = Dog;
	//animal1.age = -1;

	Animal* animalP = new Animal("Bill", Dog, 7);
	(*animalP).name = "Billy";
	animalP->name = "Biba";
	delete animalP;


	return EXIT_SUCCESS;
}