#include <iostream>
#include <string>
using namespace std;

void outputOne(string studentNames[], int studentIQ[], int index)
{
    cout << " Student #" << index << ": Name-" << studentNames[index] << " IQ-" << studentIQ[index] << endl;
}

void outputAll(string studentNames[], int studentIQ[], int arraySize)
{
    for(int i=0; i<arraySize; i++)
    {
        outputOne(studentNames, studentIQ, i);
    }
}

int getAverage(int studentIQ[], int arraySize)
{
    int sum = 0;
    for(int i=0; i<arraySize; i++)  
    {
        // i iterates from 0 to arraysize-1, which is exactly the range of index
        sum = sum + studentIQ[i];
    }
    
    int avg = sum / arraySize;
    return avg;
}

int main()
{
    string names[7] = {"Apple","Ben","Cathie","Denny","Elly","Fred","Greg"};
    int IQ[7] = {100,94,120,111,103,102,101};
    int operation, index;   // to store user input
    bool running = true;
    
    do{
        cout << "==Menu==" << endl;
        cout << "1 - Output single student's name and IQ" << endl;
        cout << "2 - Output all students' name and IQ" << endl;
        cout << "3 - Output average IQ" << endl;
        cout << "Anything else - exit program" << endl;
        cout << "Please input menu item: ";
        cin >> operation;
        switch(operation)
        {
            case 1:
                cout << "Please input student #: ";
                cin >> index;
                if(index >= 0 && index < 7)
                {
                    outputOne(names, IQ, index);
                }
                else
                {
                    cout << "Invalid index!" << endl;
                }
                break;
            case 2:
                outputAll(names, IQ, 7);
                break;
            case 3:
                cout << "Average score = " << getAverage(IQ, 7) << endl;
                break;
            default:
                running = false;
                break;
        }
    }while(running);
    
    return 0;
}
