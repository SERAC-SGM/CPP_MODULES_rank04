#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		const Animal	*array[10];
		for (int i = 0; i < 10; i += 2)
		{
			array[i] = new Dog();
			array[i + 1] = new Cat();
		}
		for (int i = 0; i < 10; i += 2)
		{
			std::cout << std::endl;
			std::cout << "Animal type = " << array[i]->getType() << std::endl;
			array[i]->makeSound();
			std::cout << std::endl;
			std::cout << "animal type = " << array[i + 1]->getType() << std::endl;
			array[i + 1]->makeSound();
			std::cout << std::endl;
		}
		std::cout << std::endl;
		for (int i = 0; i < 10; i ++)
			delete array[i];
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		std::cout << std::endl << std::endl;
		std::cout << "#### showing that the copy constructor creates a deep copy ####" << std::endl;
		std::cout << std::endl;

		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Dog *a = new Dog();
		// Cat *a = new Cat();
		if (a == NULL)
		{
			perror("Allocation failed");
			std::cerr << "Exiting the process now." << std::endl;
			exit(1);
		}

		a->setIdea(0, "I have to sniff it");
		a->setIdea(1, "I have to pee on it");
		a->setIdea(2, "I have to sniff it again");
		a->setIdea(101, "some shit");

		Dog *b = new Dog(*a);
		// Cat *b = new Cat(*a);
		if (b == NULL)
		{
			perror("Allocation failed");
			std::cerr << "Exiting the process now." << std::endl;
			exit(1);
		}
		std::cout << std::endl;

		std::cout << "\033[34mTesting a\033[0m" << std::endl;
		std::cout << "The " << a->getType() << " a has the following ideas: " << std::endl;
		a->getIdeas();
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing a\033[0m" << std::endl;
		delete(a);
		std::cout << std::endl;

		std::cout << "\033[34mTesting b\033[0m" << std::endl;
		std::cout << "The " << b->getType() << " b has the following ideas: " << std::endl;
		b->getIdeas();
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing b\033[0m" << std::endl;
		delete(b);

	}
	return 0;
}
