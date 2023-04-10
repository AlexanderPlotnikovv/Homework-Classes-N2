#include <iostream>

class Counter
{
protected:
	int counter = 1;
public:
	int add(int& counter) {
		return counter++;
	}
	int subtract(int& counter) {
		return counter--;
	}
	void cout(int counter) {
		std::cout << counter;
	}
	void value(int a) {
		counter = a;
	}
};

int main()
{
	std::cout << "Do you want to enter start value? Enter yes or no: ";
	std::string a1;
	std::cin >> a1;
	int a;
	char b = ' ';
	if (a1 == "Yes" || a1 == "yes" ) {
		std::cout << "Enter start value: ";
		Counter p;
		std::cin >> a;
		p.value(a);
		while (b != 'x') {
			std::cout << "Enter command ('+', '-', '=' or 'x'): ";
			std::cin >> b;
			if (b == '+') {
				p.add(a);
				p.value(a);
			}
			if (b == '-') {
				p.subtract(a);
				p.value(a);
			}
			if (b == '=') {
				p.cout(a);
				std::cout << std::endl;
			}
			if (b == 'x') {
				std::cout << "Bye";
			}
		}
	}
}