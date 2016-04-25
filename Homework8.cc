#include <iostream>
#include <string>
using namespace std;

void outputOne(string names[], int scores[], int index)
{
    cout << "#" << index << ": " << names[index] << " - " << scores[index] << endl;
}

void outputAll(string names[], int scores[], int size)
{
    for(int i=0; i<size; i++)
    {
        outputOne(names, scores, i);
    }
}

void change(string names[], int scores[], int index)
{
    cout << "The new score for " << names[index] << " is " << scores[index] << "." << endl;
}

int getAverageScore(int scores[], int size)
{
    int total = 0;
    for(int i=0; i<size; i++)  
    {
        total += scores[i];
    }
    
    return total/size;
}

int main()
{
    string names[5] = {"Apple","Ben","Cathie","Denny","Elly"};
    int scores[5] = {100,99,98,97,96};
    int operation, index;
    bool running = true;
    
    do{
        cout << "What would you like to do next?" << endl;
        cout << "(1 - Output student name/score)" << endl;
        cout << "(2 - Output all names/scores)" << endl;
        cout << "(3 - Output average score)" << endl;
        cout << "(4 - Change a student's score)" << endl;
        cout << "(anything else - exit program)" << endl;
        cout << "> ";
        cin >> operation;
        switch(operation)
        {
            case 1:
                cout << "Please input student #: ";
                cin >> index;
                if(index >= 0 && index < 5)
                {
                    outputOne(names, scores, index);
                }
                else
                {
                    cout << "Invalid index!" << endl;
                }
                break;
            case 2:
                outputAll(names, scores, 5);
                break;
            case 3:
                cout << "Average  = " << getAverageScore(scores, 5) << endl;
                break;
            case 4:
                cout << "Please input student #: ";
                cin >> index;
                cout << "Please enter the new score: ";
                cin >> scores[index];
                scores[index] = scores[index];
                if(index >= 0 && index < 5)
                {
                    change(names, scores, index);
                }
                else
                {
                    cout << "Invalid index!" << endl;
                }
                break;
            default:
                running = false;
                break;
        }
    }while(running);
    
    return 0;
}
