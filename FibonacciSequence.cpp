#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

int FibonacciNumber(int termIndex){
  if(termIndex == 0)
    return 0;
  else if(termIndex == 1)
    return 1;                          //base case
  else 
    return FibonacciNumber(termIndex - 1) + FibonacciNumber(termIndex - 2);        //Recursive logic
}

int main(){

  cout << "Fibonacci Sequence: {1, 1, 2, 3, 5, 8, ...}" << endl;
  cout << "Enter a number: " << endl;  //input a number

  int userNum;
  cin >> userNum;

  //This calculates the Fibonacci number for that input
  int result = FibonacciNumber(userNum);

  //show result
  cout << "The " << userNum << " number in the Fibonacci sequence is: " << result << endl;
  
  return 0;
}

//Fibonacci sequence is a numberical sequence where each number is the sum of the previous two terms in the sequence





