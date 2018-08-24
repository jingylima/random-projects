#include <iostream>
using namespace std;

class Car
{

	public:
		Car(int num, string brand)
		{
			yearModel = num;
			make = brand;
			speed = 0;
		}
		int getYearModel()
		{
			return yearModel;
		}
		string getMake()
		{
			return make;
		}
		int getSpeed()
		{
			return speed;
		}
		void accelerate()
		{
			speed += 5;
		}
		void brake()
		{
			speed -= 5;
		}
	private:
		int yearModel;
		string make;
		int speed;
};

int main()
{
	Car mustang(2009, "Ford");
	for(int x = 0; x < 5; x++)
	{
		mustang.accelerate();
		cout << mustang.getSpeed() << endl;
	}
	for(int x = 0; x < 5; x++)
	{
		mustang.brake();
		cout << mustang.getSpeed() << endl;
	}
	
}