#include<iostream>
#include<string>

struct Student{
	string name;
	int age; //this->age
	int course;
	int* marks;
	
	Student(
		string nname = "Vasya",
		int age = 30, //age
		int ccourse = 10)
	{
		name = nname;
		this->age = age;
		course = ccourse;
	}
		
	Student(
		string name = "Vasya",
		int age = 30, //age
		int course = 10)
	{
		this->name = name;
		this->age = age;
		this->course = course;
	}
		
	Student(
		string name = "Vasya",
		int age = 30, //age
		int course = 10)
		: name(name), age(age), course(course), marks(new int[10])
	{
		
	}
	
	Student(const Student& st) : name(st.name)
	{
		//this->name = st.name;
		this->age = st.age;
		this->course = st.course;
		this->marks = new int[10];
		for(int i = 0; i < 10; ++i)
		{
			this->marks[i] = st.marks[i];
		}
	}
	
	~Student()
	{
		delete[] marks;
		//освобождение памяти
	}
	
	void speak()
	{
		std::cout << "My name is " << this->name << std::endl;
	}
}

void printStudent(Student st)
{
	std::cout << st.name << std::endl;
	st.speak();
}

int main(int argc, char* argv[])
{
	Student filipenko;
	filipenko.name = "Filipenko s odnoi p";
	filipenko.age = 5;
	filipenko.course = 1;
	
	Student toskuev;
	toskuev.name = "Egor";
	toskuev.age = 6;
	toskuev.course = 1;
	
	Student li("Peitze", 12, 3);
	
	Student bob("Bob", 3);
	printStudent(bob);
	return EXIT_SUCCESS;
}