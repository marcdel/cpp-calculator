#include <iostream>
#include <iomanip>
using namespace std;

int getFirstInteger()
{
    int firstNumber = 0;
    cout << "Please enter first integer: " << endl;
    cin >> firstNumber;
    
    return firstNumber;
}

int getSecondInteger()
{
    int secondNumber = 0;
    cout << "Please enter second integer: " << endl;
    cin >> secondNumber;
    
    return secondNumber;
}

char getOperation()
{
    char operation;
    cout << "Please enter an operation to use:\n"
    << "A\tAddition\n"
    << "S\tSubtraction\n"
    << "M\tMultiplication\n"
    << "D\tDivision\n"
    << "Please enter the operator now: " << endl;
    cin >> operation;
    return toupper(operation);
}

bool validateInput(char operation)
{
    return operation == 'A' || operation == 'S' || operation == 'M' || operation == 'D';
}

int addition(int first, int second)
{
    return first + second;
}

int subtraction(int first, int second)
{
    if (first > second)
    {
        return first - second;
    }

    return second - first;
}

int multiplication(int first, int second)
{
    return first * second;
}

int division(int first, int second)
{
    if (first > second)
    {
        return first / second;
    }

    return second / first;
}

int main()
{
    int firstNumber = 0;
    int secondNumber = 0;

    firstNumber = getFirstInteger();
    secondNumber = getSecondInteger();

    char operation = getOperation();
    
    if(!validateInput(operation))
    {
        cout << "Invalid input for operator.  Please use 'A, S, M, or D.'" << endl;
        return 1;
    }

    int answer = 0;
    
    switch(operation)
    {
        case 'A':
            answer = addition(firstNumber, secondNumber);
            break;
        case 'S':
            answer = subtraction(firstNumber, secondNumber);
            break;
        case 'M':
            answer = multiplication(firstNumber, secondNumber);
            break;
        case 'D':
            answer = division(firstNumber, secondNumber);
    }
    
    cout << "The answer to your problem is: " << answer << endl;
    
    return 0;
}
