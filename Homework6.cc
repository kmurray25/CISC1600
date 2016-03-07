#include <iostream>
#include <string>
using namespace std;

int add (int a, int b)
{
    return a+b;
}

int sub (int a, int b)
{
    return a-b;
}

int main ()
{
    int x=0;
    int y=0;
    cout << "Please input value for x: ";
    cin >> x;
    cout << "And input value for y: ";
    cin >> y;
    
    int x_factorial = 1;
    int y_factorial = 1;
    int operation = 1;
    while (operation != 0)
    {
        cout << "Choose one:" << endl;
        cout << "1) print x+y" << endl;
        cout << "2) print x-y" << endl;
        cout << "3) print x!" << endl;
        cout << "4) print y!" << endl;
        cout << "0) exit program" << endl;
        cout << " : ";
        cin >> operation;
        int output;
        if (operation == 1)
        {
            output = add(x,y);
        }
        
        else if (operation == 2)
        {
            output = sub(x,y);
        }
        
        else if (operation == 3)
        {
            while (x>0)
            {
            x_factorial *= x;
            x = x - 1;
            }
            output = x_factorial;
        }
        
        else if (operation == 4)
        {
            while (y>0)
            {
            y_factorial *= y;
            y = y - 1;
            }
            output = y_factorial;
        }
        
        else
        {
            break;
        }
        cout << output << endl;
    }
return 0;
}
