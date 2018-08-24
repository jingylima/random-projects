#include <iostream>
#include <string>
using namespace std;

class animal
{
	private:
		string name;
		int age;
		int weight;
		int height;
	public:
		animal()
		{
			
		}
		void setName(string x)
		{
			name = x;
		}
		void setAge(int x)
		{
			age = x;
		}
		void setWeight(int x)
		{
			weight = x;
		}
		void setHeight(int x)
		{
			height = x;
		}
		
		string getName()
		{
			return name;
		}
		int getAge()
		{
			return age;
		}
		int getWeight()
		{
			return weight;
		}
		int getHeight()
		{
			return height;
		}
};

int main() 
{
	animal dog1;
	dog1.setName("tim");
	int a;
	cin >> a;
	dog1.setHeight(a);
	
	cout << dog1.getName() << dog1.getHeight();
}