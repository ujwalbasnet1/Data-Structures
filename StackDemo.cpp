#include <iostream>
#include "Stack.hpp"

using namespace std;

int main()
{

	Stack<int> s;
	s.push(4);
	s.push(5);
	s.push(1);

	cout << "Size: " << s.size() << endl;

	s.toString();

	cout << s.pop() << endl;
	cout << s.pop() << endl;

	cout << "Size: " << s.size() << endl;

	s.toString();

	cout << s.peak() << endl;

	s.toString();

	cout << "Size: " << s.size() << endl;

	return 0;
}