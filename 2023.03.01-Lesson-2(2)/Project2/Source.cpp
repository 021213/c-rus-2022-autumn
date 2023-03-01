#include<iostream>
#include<string>
#include"Animal.h"

int main(int argc, char* argv[])
{
	Animal animal1("Bob", Fish, 5);

	if (animal1.getType() == Dog) { std::cout << "Woof!" << std::endl; }

	Animal* animalP = new Animal("Bill", Dog, 7);
	(*animalP).name = "Billy";
	animalP->name = "Biba";
	delete animalP;

	Animal* animals1[100];
	Animal** animals2 = new Animal*[100];

	for (int i = 0; i < 100; ++i)
	{
		animals1[i] = new Animal();
		animals2[i] = new Animal();
	}
	   
	for (int i = 0; i < 100; ++i)
	{
		delete animals1[i];
		delete animals2[i];
	}
	delete[] animals2;

	return EXIT_SUCCESS;
}