#include<iostream>
#include<string>
#include<unordered_map>


bool canFormPalindrome(const std::string& word){

  std::unordered_map<char,int> frequency;

  int oddFrequency = 0;

  for(char c: word){

    frequency[c]++;

  }

  for(const auto& pair : frequency){

    if(pair.second % 2 != 0){
      oddFrequency++;

    }

    if(oddFrequency>1){
      return false;

    }

  }

  return true;


}

int main(){

  std::string word = "civics";

  if(canFormPalindrome(word)){
    std::cout<<"Yes";

  }else{

    std::cout<<"No";
  }

  return 0;
}

