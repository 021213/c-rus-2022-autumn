#include<iostream>
#include"BTree.h"

int main()
{
	BTree tree;
	tree.Add(8);
	tree.Add(4);
	tree.Add(3);
	std::cout << tree << std::endl;
	tree.Add(6);
	std::cout << tree << std::endl;
	tree.Add(7);
	tree.Add(5);
	std::cout << tree << std::endl;
	tree.Add(1);
	std::cout << tree << std::endl;
	tree.Add(2);
	std::cout << tree << std::endl;

	return EXIT_SUCCESS;
}