#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string a;
	cout << "Enter your name: ";
	cin >> a;

	string b;
	cout << "What is your age: ";
	cin >> b;

	string c;
	cout << "What is your favorite thing: ";
	cin >> c;

	cout << "Hello, my name is " << a << "." << endl;
	cout << "I am " << b << " years old and my favorite thing is " << c << "." << endl;

}
