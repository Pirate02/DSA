// find maximum


#include<iostream>

using namespace std;

/** this is good but has bugs - for 5 5 3 | 2 5 2 
 *
 * int max (int a, int b, int c) {

    if (a > b && a > c ) {


      return a;

    }else if (b> a && b > c ){


      return b;
    


  }else {
    return c;
  }

}

*/

// better approach with no bugs 

int findMax (int a, int b, int c){

  int largesst = a;

  if(b>largesst){
    largesst = b;

  }
  if (c > largesst) {
    largesst = c;

  }

  return largesst;


}

int main () {

  int a;
  int b;
  int c;


  cout <<"enter  first number: ";
  cin >> a;

  cout << "enter second number: ";
  cin >> b;

  cout <<"enter third number: ";
  cin >> c;



  cout << "the max is : " << findMax(a,b,c);

 return 0;


}

 
