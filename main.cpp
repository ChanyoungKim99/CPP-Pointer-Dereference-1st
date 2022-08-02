#include <iostream>

int main()
{
	int a{ 1 };

	int *p;

	p = &a; // reference

	*p = 3; // dereference

	std::cout << a << std::endl;
}