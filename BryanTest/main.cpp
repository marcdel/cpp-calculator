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

int main()
{
    // Declare variables
    int firstNumber = 0;
    int secondNumber = 0;

    firstNumber = getFirstInteger();
    secondNumber = getSecondInteger();
    
    // Determine the operatoin to be used
    char operation;
    
    cout << "Please enter an operation to use:\n"
    << "A\tAddition\n"
    << "S\tSubtraction\n"
    << "M\tMultiplication\n"
    << "D\tDivision\n"
    << "Please enter the operator now: " << endl;
    cin >> operation;
    operation = toupper(operation);
    
    if(operation != 'A' && operation != 'S' && operation != 'M' && operation != 'D')
    {
        cout << "Invalid input for operator.  Please use 'A, S, M, or D.'" << endl;
        return 1;
    }

    int answer = 0;
    // Determine the answer
    
    if (operation == 'A')
    {
        answer = firstNumber + secondNumber;
    }
    else if (operation == 'S')
    {
        if (firstNumber > secondNumber)
            answer = firstNumber - secondNumber;
        else(secondNumber > firstNumber);
            answer = secondNumber - firstNumber;
    }
    else if (operation == 'M')
    {
        answer = firstNumber * secondNumber;
    }
    else if (operation == 'D')
    {
        if (firstNumber > secondNumber)
            answer = firstNumber / secondNumber;
        else (secondNumber > firstNumber);
            answer = secondNumber / firstNumber;
    }
    
    cout << "The answer to your problem is: " << answer << endl;
    
    return 0;
}
