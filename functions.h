#ifndef FUNCTONS_H
#define FUNCTONS_H
#include <vector>

int  sumDivisors(int  n);
vector<int> findDivisors(int number);
void intersectionOfDivisors(int x, int y);
vector<long > getDivisors(long  n) ;
vector<long > commonDivisors(long  x, long  y);
bool isPrime(long  n);
vector<long > getPrimes(long  n) ;
vector<long long> perfectNumbersInInterval(long long start, long long end);
vector<long long> firstNPerfectNumbers(int n);
vector<long long > findFirstNPerfectNumbers(int n);
string perfectNumbersRepresentation(int p);

#endif
