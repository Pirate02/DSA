#include<iostream>
#include<string>
#include<unordered_map>


std::unordered_map<char, int> charFrequency(const std::string& word){

  std::unordered_map<char,int> charFrequency;

  for(char c : word){

    charFrequency[c]++;

  }
  return charFrequency;

}

int main(){

  std::string word = "banana";

  std::unordered_map<char,int> result = charFrequency(word);

  for(auto pair: result){
    std::cout<<pair.first<<"-> "<<pair.second<<"\n";

  }

  return 0;
}

// time complexity - O(n) space - O(k)
