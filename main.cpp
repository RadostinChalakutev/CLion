#include <iostream>
using namespace std;
#include "functions.h"
#include "functions.cpp"

int main() {
Broi:
    cout << "Enter an integer higher than 0 to get the sum of its divisors:";
    int n;
    cin >> n;
    sumDivisors(n);
    if (n < 0) {
        cout << "Invalid input data!" << endl;
        goto Broi;
    }
    cout << "Sum of divisors of number " << n << " is: ";
    cout << sumDivisors(n) << endl;
Invalid:
    cout << "Enter an integer higher than 1 to get its divisors:";

    int divisors;
    cin >> divisors;
    if (divisors < 1) {
        cout << "Invalid input data!" << endl;
        goto Invalid;
    }

    cout << "Divisors of number " << divisors << " are: ";
    findDivisors(divisors);

    cout<<"Enter two positive integer to get intersection of the set of divisors numbers:";
    int firstNumber;
    int secondNumber;
    cin >> firstNumber >> secondNumber;
    cout<<"The result is:";
    intersectionOfDivisors(firstNumber,secondNumber);

    int num1;
    int num2;
    cout<<"Enter two integer to find their union of prime numbers:";
    cin >> num1 >> num2;
    cout<<"The result is:";
     vector<int>unionPrimes=unionPrimeDivsors(num1,num2);

    for (int i=0;i<unionPrimes.size();++i) {
        cout<<unionPrimes[i]<<" ";
    }
    cout<<endl;

    InvalidInput:
    cout << "Enter an integer higher than 0 to get if integer is perfect or not:";
    int input;
    cin >> input;
    if (input<=0) {
        cout << "Invalid input data!" << endl;
        goto InvalidInput;
    }

    if (isPerfectNumber(input) == true) {

        cout << "Number " << input;
        cout << " is perfect" << endl;
    } else {
        cout << "Number " << input;
        cout << " is not perfect" << endl;
    }

   long long  start;
    long long  end;
    Start:
    cout<<"Enter two numbers to start and end the range of perfect numbers!";
    cout<<"Numbers must be between 1 and 2 305 843 008 139 952 128:";
    cin >> start;
    cin >> end;
    if (start>end) {
        cout<<"Invalid input data"<<endl;
       goto Start;
    }


    vector<long long> numbers=perfectNumbersInInterval(start,end);
    if (numbers.size()==0) {
        cout<<"No perfect number in range!"<<endl;
    }else {
        cout<<"The result is:";
        for (long long number:numbers) {
            cout<<number<<" ";
        }
    }

    cout<<endl;
    cout<<"Enter count of perfect numbers which you want to see: ";
    int firstNNumber;
    cin>>firstNNumber;
    vector<long long >NPerfectNumbers=firstNPerfectNumbers( firstNNumber);
    for (long long  number:NPerfectNumbers) {
        cout<<number<<" ";
    }
    cout<<endl;


    return 0;
}
