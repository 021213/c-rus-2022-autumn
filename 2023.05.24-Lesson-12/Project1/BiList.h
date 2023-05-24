#pragma once
#include<ostream>

struct BiNode
{
	int data;
	BiNode* next;
	BiNode* prev;
	BiNode(int data, BiNode* next = nullptr, BiNode* prev = nullptr) :
		data(data), next(next), prev(prev)
	{
		if (next != nullptr)
		{
			this->next->prev = this;
		}
		if (prev != nullptr)
		{
			this->prev->next = this;
		}
	}
	~BiNode()
	{
		data = 0;
	}
};
class BiList
{
private:
	BiNode* head;
	BiNode* tail;

	bool Index_Valid(int index);
	BiNode* Extract_Node(int index);
	void Insert_Node(BiNode* node, int index);
	void Print(std::ostream& stream) const;

	int nan = 0;

	BiList(BiList& list) = delete;
	BiList operator=(BiList& list) = delete;

public:
	BiList() : head(nullptr), tail(nullptr) {}
	~BiList();
	
	int Length();

	void Push_Head(int data);
	int Extract_Head();
	void Pop_Head();

	void Push_Tail(int data);
	int Extract_Tail();
	void Pop_Tail();

	void Insert(int data, int index);
	int Extract(int index);
	void Remove(int index);

	int& operator[](int index);
	void Swap(int index1, int index2);
	void Mix();

	friend std::ostream& operator<<(std::ostream& stream, const BiList& list);
};

