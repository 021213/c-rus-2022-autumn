#include<iostream>
#include"List.h"

void shift(List& list, int ind)
{
	if (!list.Index_Valid(ind)) return;

	Node* firstPartEnd = list.head;
	while (ind > 1)
	{
		firstPartEnd = firstPartEnd->next;
		ind--;
	}

	Node* secondPartStart = firstPartEnd->next;
	firstPartEnd->next = nullptr;
	Node* firstPartStart = list.head;
	list.head = secondPartStart;

	//....magic

}

int main(int argc, char* argv[])
{
	List list;
	list.Push_Tail(20);
	list.Push_Head(15);
	list.Push_Head(10);
	list.Push_Head(5);
	std::cout << list << std::endl;
	list.Push_Tail(25);
	list.Push_Tail(30);
	std::cout << list << std::endl;
	list.Insert(1, 0);
	list.Insert(35, 7);
	list.Insert(35, -32);
	std::cout << list << std::endl;

	std::cout << "pop " << list.Extract(2) << std::endl;
	std::cout << "pop " << list.Extract(6) << std::endl;
	std::cout << "pop " << list.Extract(10) << std::endl;
	std::cout << "pop " << list.Extract(-23) << std::endl;
	std::cout << "pop " << list.Extract_Head() << std::endl;
	std::cout << "pop " << list.Extract_Head() << std::endl;
	std::cout << "pop " << list.Extract_Tail() << std::endl;
	std::cout << "pop " << list.Extract_Tail() << std::endl;
	std::cout << list << std::endl;

	for (int i = -1; i < list.Length() + 1; ++i)
	{
		list[i] = i;
	}
	std::cout << list << std::endl;

	for (int i = 2; i < 10; ++i)
	{
		list.Push_Tail(i);
	}
	std::cout << list << std::endl;

	list.Swap(2, 5);
	std::cout << list << std::endl;
	list.Swap(0, 5);
	std::cout << list << std::endl;
	list.Swap(5, 9);
	std::cout << list << std::endl;
	list.Swap(0, 9);
	std::cout << list << std::endl;
	list.Swap(2, 3);
	std::cout << list << std::endl;

	list.Sort();

	std::cout << list << std::endl;

	return EXIT_SUCCESS;
}