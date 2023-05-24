#include "BiList.h"

BiList::~BiList()
{
	while (this->head != nullptr)
	{
		Pop_Head();
	}
}

int BiList::Length()
{
	int count = 0;
	BiNode* temp = this->head;
	while (temp != nullptr)
	{
		temp = temp->next;
		++count;
	}
	return count;
}

void BiList::Push_Head(int data)
{
	Insert_Node(new BiNode(data), 0);
	//this->head = new BiNode(data, this->head);
	//tail = (tail == nullptr ? head : tail);
}

int BiList::Extract_Head()
{
	return Extract(0);
}

void BiList::Pop_Head()
{
	this->Remove(0);
}

void BiList::Push_Tail(int data)
{
	Insert_Node(new BiNode(data), Length());
	//this->tail = new BiNode(data, nullptr, this->tail);
	//head = (head == nullptr ? tail : head);
}

int BiList::Extract_Tail()
{
	return Extract(this->Length() - 1);
}

void BiList::Pop_Tail()
{
	this->Remove(this->Length() - 1);
}

void BiList::Insert(int data, int index)
{
	Insert_Node(new BiNode(data), index);
}

int BiList::Extract(int index)
{
	BiNode* temp = this->Extract_Node(index);
	int res = 0;
	if (temp != nullptr)
	{
		res = temp->data;
		delete temp;
	}
	return res;
}

void BiList::Remove(int index)
{
	BiNode* temp = this->Extract_Node(index);
	if (temp != nullptr)
	{
		delete temp;
	}
}

int & BiList::operator[](int index)
{
	if (!this->Index_Valid(index))
	{
		return nan;
	}

	BiNode* temp = this->head;
	while (index > 0)
	{
		temp = temp->next;
		--index;
	}
	return temp->data;
}

void BiList::Swap(int index1, int index2)
{
	if (index1 == index2 || !Index_Valid(index1) || !Index_Valid(index2))
	{
		return;
	}
	if (index1 > index2)
	{
		return this->Swap(index2, index1);
	}
	BiNode* node2 = this->Extract_Node(index2);
	BiNode* node1 = this->Extract_Node(index1);
	this->Insert_Node(node2, index1);
	this->Insert_Node(node1, index2);
}

void BiList::Mix()
{
	for (int i = 0; i < this->Length(); ++i)
	{
		this->Swap(i, rand() % this->Length());
	}
}

bool BiList::Index_Valid(int index)
{
	return (index >= 0 && index < this->Length());
}

void BiList::Insert_Node(BiNode* node, int index)
{
	if (index == 0)
	{
		node->next = this->head;
		if (this->head != nullptr)
		{
			this->head->prev = node;
		}
		this->head = node;
		this->tail = (this->tail == nullptr ? this->head : this->tail);
	}
	else if (index == this->Length())
	{
		node->prev = this->tail;
		this->tail->next = node;
		this->tail = node;
	}
	else if (Index_Valid(index))
	{
		BiNode* temp = this->head;
		while (index > 1)
		{
			temp = temp->next;
			--index;
		}
		node->prev = temp;
		node->next = temp->next;
		node->next->prev = node;
		temp->next = node;
		return;
	}
}

void BiList::Print(std::ostream & stream) const
{
	BiNode* temp = head;
	while (temp != nullptr)
	{
		stream << temp->data << " ";
		temp = temp->next;
	}
}

std::ostream & operator<<(std::ostream & stream, const BiList & list)
{
	list.Print(stream);
	return stream;
}

BiNode* BiList::Extract_Node(int index)
{
	if (!Index_Valid(index))
	{
		return nullptr;
	}
	BiNode* res = nullptr;
	if (index == 0)
	{
		res = this->head;
		this->head = this->head->next;
		this->tail = (this->head == nullptr ? nullptr : this->tail);
	}
	else if (index == Length() - 1)
	{
		res = this->tail;
		this->tail = this->tail->prev;
		this->tail->next = nullptr;
	}
	else
	{
		BiNode* temp = this->head;
		while (index > 1)
		{
			temp = temp->next;
			--index;
		}
		res = temp->next;
		temp->next = temp->next->next;
		if (temp->next != nullptr)
		{
			temp->next->prev = temp;
		}
	}
	return res;
}