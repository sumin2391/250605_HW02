#include <iostream>
using namespace std;

class Animal
{
public:
	char move();
	void makeSound();
};
class Monster
{
public:
	char move();
	void sound();
	void attack();
};

class Dog : public Animal {};
class Cat : public Animal {};
class Cow : public Animal {};


int main() {
	int Ro = 0;

	for (int i = 0; i < 10; i++)
	{
		Ro += i;
		std::cout << "�˼��մϴ�.. ���� ���߾��..�𸣰ھ��.. \n\n";
	}
	return 0;
}