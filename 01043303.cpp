#include <iostream>
#include <string.h>
#include <vector>

using std::cout;
using std::cin;

template <typename T1, typename T2>
class Pair
{
protected:
	T1 one;
	T2 two;
public:
	Pair() {}
	Pair(T1 a, T2 b):
		one(a), two(b) {}
	void setOne(T1 a) { one = a; }
	T1 getOne() { return one; }
	void setTwo(T2 a) { two = a; }
	T2 getTwo() { return two; }
};

int main()
{
	Pair<int, std::string> p(4, "String");

	cout << "First value: " << p.getOne() << std::endl;
	cout << "Second value: " << p.getTwo() << std::endl;

	return 0;
}