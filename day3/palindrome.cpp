#include<iostream>
#include<string>



bool isPalindrome(const std::string& word){
  
  int left = 0;
  int right = word.size()-1;

  while(left<right){

    if(word[left] != word[right]){

      return false;

    }

    left++;
    right--;


  }
  return true;

}

int main(){

  std::string word = "madam";

  if(isPalindrome(word)){

    std::cout<<"True";


  }else{

    std::cout<<"False";
  }



  return 0;
}
