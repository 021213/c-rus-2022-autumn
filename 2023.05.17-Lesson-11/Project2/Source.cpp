#include <iostream>
#include <string>

struct Student
{
public:
	std::string surname;
	std::string name;
	int mathm;
	int physicsm;
	int csm;

	Student(
		std::string surname = "Ivanov",
		std::string name = "Iva",
		int mathm = 0,
		int physicsm = 0,
		int csm = 0
	) :
		surname(surname),
		name(name),
		mathm(mathm),
		physicsm(physicsm),
		csm(csm)
	{};

	Student(const Student& pupil) :
		surname(pupil.surname),
		name(pupil.name),
		mathm(pupil.mathm),
		physicsm(pupil.physicsm),
		csm(pupil.csm)
	{};

	float avm()
	{
		return 1.0f * (mathm + physicsm + csm) / 3;
	}

	void print()
	{
		std::cout << surname << " " << name << " " << avm() << std::endl;
	}

	~Student() {};
};

void merge(Student* a, int start, int mid, int end)
{
	int k = start;
	int i = start;
	int j = mid + 1;
	Student* b = new Student[end + 1];

	while (i <= mid && j <= end)
	{
		if (a[i].avm() <= a[j].avm())
		{
			b[k++] = a[i++];
		}
		else
		{
			b[k++] = a[j++];
		}
	}

	while (i <= mid)
	{
		b[k++] = a[i++];
	}

	while (j <= end)
	{
		b[k++] = a[j++];
	}

	for (int i = start; i <= end; i++)
	{
		a[i] = b[i];
	}
}

void mergeSort(Student* a, int start, int end)
{
	if (start == end)
	{
		return;
	}
	if (start < end)
	{
		int mid = (start + end) / 2;
		mergeSort(a, start, mid);
		mergeSort(a, mid + 1, end);
		merge(a, start, mid, end);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::string surname;
	std::string name;
	int mathm = 0;
	int physicsm = 0;
	int csm = 0;
	std::cin >> n;

	Student* a = new Student[n];

	for (int i = 0; i < n; ++i)
	{
		//std::cin >> surname >> name >> mathm >> physicsm >> csm;
		name = "Student ";
		surname = "Sur";
		mathm = rand() % 5 + 15;
		physicsm = rand() % 5 + 15;
		csm = rand() % 5 + 15;
		a[i] = Student(surname, name, mathm, physicsm, csm);
	}

	mergeSort(a, 0, n - 1);

	for (int i = 0; i < n; ++i)
	{
		a[i].print();
	}

	delete[] a;

	return EXIT_SUCCESS;
}