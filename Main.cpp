#include <iostream>
#include <vector>
#include "Vector.h"

int main()
{
	Vector<size_t> values;
	values.EmplaceBack(1);
	values.EmplaceBack(2);
	values.EmplaceBack(3);
	values.EmplaceBack(4);
	values.EmplaceBack(5);

	std::cout << "Not using iterator \n";
	for (int i = 0; i < values.Size(); i++)
		std::cout << values[i] << std::endl;

	std::cout << "Iterator: \n";
	for (Vector<size_t>::Iterator it = values.begin();
		it != values.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	std::cin.get();
}
