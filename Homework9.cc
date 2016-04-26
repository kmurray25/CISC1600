#include <iostream>
#include <string>
using namespace std;

void outputOne(string studentNames[], int studentScores[], int index)
{
    cout << " Student #" << index << ": Name-" << studentNames[index] << " Score-" << studentScores[index] << endl;
}

void outputScore(string studentNames[], int studentScores[], int index)
{
    cout << "The score for " << studentNames[index] << " is " << studentScores[index] << "." << endl;
}

void printName(string studentNames[], int index)

{
    cout << " Student #" << index << ": Name-" << studentNames[index] << endl;
}

void listNames(string studentNames[], int index, int arraySize)
{
    for(int i=0; i<arraySize; i++)
    {
        printName(studentNames, i);
    }
}


void outputAll(string studentNames[], int studentScores[], int arraySize)
{
    for(int i=0; i<arraySize; i++)
    {
        outputOne(studentNames, studentScores, i);
    }
}

int getAverage(int studentScores[], int arraySize)
{
    int sum = 0;
    for(int i=0; i<arraySize; i++)  
    {
        // i iterates from 0 to arraysize-1, which is exactly the range of index
        sum = sum + studentScores[i];
    }
    
    int avg = sum / arraySize;
    return avg;
}

int main()
{
    string names[5] = {"Apple","Ben","Cathie","Denny","Elly"};
    int scores[5] = {60,70,80,90,100};
    int operation, index;   // to store user input
    bool running = true;
    
    do{
        cout << "==Menu==" << endl;
        cout << "1 - Output single student's name and score" << endl;
        cout << "2 - Output one student's score" << endl;
        cout << "3 - Output all students' name and score" << endl;
        cout << "4 - Output average score" << endl;
        cout << "Anything else - exit program" << endl;
        cout << "Please input menu item: ";
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
                cout << "Enter student #: ";
                cin >> index;
                if(index >= 0 && index < 5)
                {
                    outputScore(names, scores, index);
                }
                else
                {
                    cout << "Not valid. These are the possible options: " << endl;
                    listNames(names, index, 5);
                }
                break;
            case 3:
                outputAll(names, scores, 5);
                break;
            case 4:
                cout << "Average score = " << getAverage(scores, 5) << endl;
                break;
            default:
                running = false;
                break;
        }
    }while(running);
    
    return 0;
}
