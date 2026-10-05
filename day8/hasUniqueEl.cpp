// hasing and sliding window 


// to find if a substring has unique elements 


#include<iostream>
#include<unordered_set>
#include<string>


bool hasUnique(const std::string& word,int left, int right){

  std::unordered_set<char> seen;

  for(int i = left; i <= right; i++){

    if(seen.count(word[i])){
      return false;
    }

    seen.insert(word[i]);




  }

  return true;
}

int main(){

  std::string word = "abca";


  if(hasUnique(word,0,3)){
    std::cout<<"True";

  }else{

    std::cout<<"False";
  }



  return 0;
}
