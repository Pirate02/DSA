#include<iostream>
#include<string>
#include<cctype> // explicit library for string operation methods.


bool isPalindrome(const std::string& word){

  int left = 0;
  int right = word.size()-1;


  while(left<right){
    if(std::tolower(word[left]) != std::tolower(word[right])){
      return false;

    }
    left++;
    right--;


  }

  return true;



}

int main(){
  std::string word = "RaceCar";

  if(isPalindrome(word)){
    std::cout<<"True";

  }else{
    std::cout<<"False";
  }




  return 0;
}
