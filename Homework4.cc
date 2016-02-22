#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a;
	cout << "How many numbers would you like to use?" << endl;
	cin >> a;

  cout << "Enter " << a << " numbers and hit enter after each one:";
  int i = 0;
  double sum;

        while(i < a)
        {
        double b;
        cin >> b;
        sum += b;
        i++;

        }


        cout << "The sum of the " << a << " numbers you entered is " << sum << ".";

return 0;

}
