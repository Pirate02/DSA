#include<iostream>

using namespace std;

bool evenOdd (int num) {

  if(num%2 == 0){

    return true;

  }

  return false;


}


// even cleaner -- > 
//
// bool isEven (int n) {
// 
// return num %2 == 0;
//
// }

int main (){

  int num;

cout << "enter a number\n";

  cin >> num;

  if(evenOdd(num)){
    cout <<"True";

  }else {
    cout<<"False";

  }




  return 0;


}
