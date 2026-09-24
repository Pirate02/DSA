#include<iostream>

using namespace std;

int sumToN(int n);

int main() {

  int n;

  cout << "enter a number : ";

  cin >> n;


  cout<< "The sum is :  " << sumToN(n);


  return 0;


}

int sumToN(int n) {

  int sum = 0;

  for (int i=1; i<=n; i++){

    sum += i;




  }

  return sum;


}
