#include "Test.h"
struct PrimeConstructor
{
	static int count;
	
	PrimeConstructor()
	{
		count++;
		std::cout << "First constructor" << '\n';
		std::cout << "First value " << count << '\n';
	}
};
int PrimeConstructor::count = 0;
struct  A :  PrimeConstructor
{
	
	A()
	{
		
		std::cout << "A constructor" << std::endl;
		std::cout << "Current Count  " << count << '\n';
	}
};
struct B :  PrimeConstructor
{
	
	B()
	{
		
		std::cout << "B construct" << std::endl;
		std::cout << "Current Construct" << count << '\n';
	}
};
struct C: B, A
{
	C()
	{
		std::cout << "C constructor" << '\n';
	}
};
C c;
int main()
{
	
	
 }