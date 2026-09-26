#include<iostream>
#include<string>



void reverseString(std::string& word){ // here i need to modify the string there for no const.

  int left=0;
  int right = word.size() -1;

  while(left<right){

    std::swap(word[left], word[right]);

    left++;
    right--;



  }



}

int main ( ){

  std::string word = "reverse";

  reverseString(word);

    for (char c : word ){


  std::cout<<c<< " "; 



    }


  return 0;
}
