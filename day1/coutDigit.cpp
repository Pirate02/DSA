#include<iostream>

using namespace std;



int digitCount(int n){

  int count =0;
  int digit = abs(n);

  do {

    digit =  digit/10;
    count++;


  }while(digit>0);


return count;



}

int main (){


  int digits;

  cout << "Enter a number to count digits: ";

  cin >> digits;


  cout << "The number of digit(s) : " << digitCount(digits);




  return 0;


}
