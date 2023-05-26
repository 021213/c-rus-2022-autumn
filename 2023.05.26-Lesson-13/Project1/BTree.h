#pragma once
#include<ostream>

struct Node
{
	int data;
	Node(int data) : data(data) {};
};

class BTree
{
private:
	int n;
	Node** data;
	
	void Expand()
	{
		Node** newdata = new Node*[n * 2];
		for (int i = 0; i < n; ++i)
		{
			newdata[i] = data[i];
			data[i] = nullptr;
		}
		for (int i = n; i < 2 * n; ++i)
		{
			newdata[i] = nullptr;
		}
		delete[] data;
		data = newdata;
		n *= 2;
	}

	void Insert(Node* node, int ind)
	{
		while (ind >= n)
		{
			Expand();
		}
		if (data[ind] == nullptr)
		{
			data[ind] = node;
		}
		else if (data[ind]->data > node->data)
		{
			Insert(node, ind * 2 + 1);
		}
		else if (data[ind]->data < node->data)
		{
			Insert(node, ind * 2 + 2);
		}
	}

	bool Contains(Node* node, int ind)
	{
		if (this->data[ind] == nullptr)
		{
			return false;
		}
		if (this->data[ind]->data == node->data)
		{
			return true;
		}
		if (this->data[ind]->data > node->data)
		{
			return Contains(node, ind * 2 + 1);
		}
		if (this->data[ind]->data < node->data)
		{
			return Contains(node, ind * 2 + 2);
		}
	}

public:
	BTree(int capacity = 10) : n(capacity), data(new Node*[capacity])
	{
		for (int i = 0; i < capacity; ++i)
		{
			data[i] = nullptr;
		}
	}
	
	~BTree()
	{
		for (int i = 0; i < n; ++i)
		{
			if (data[i] != nullptr)
			{
				delete data[i];
			}
		}
		delete[] data;
	}

	void Add(int data)
	{
		Insert(new Node(data), 0);
	}

	bool Contains(int data)
	{
		return Contains(new Node(data), 0);
	}

	friend std::ostream& operator<<(std::ostream& stream, BTree& tree)
	{
		for (int i = 0; i < tree.n; ++i)
		{
			if (tree.data[i] != nullptr)
			{
				stream << tree.data[i]->data << " ";
			}
		}
		return stream;
	}
};

