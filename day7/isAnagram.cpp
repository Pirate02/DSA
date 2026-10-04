#include<iostream>
#include<string>
#include<unordered_map>


bool isAnagram(const std::string& word1, const std::string& word2){

  

  std::unordered_map<char, int> frequency;
// immediate check and reject
  if(word1.size() != word2.size()){
    return false;

  }


  for(char c : word1){

    frequency[c]++;

  }

  for(char c : word2){
    frequency[c]--;

  }

  for(const auto& pair: frequency){ // for unchange and no copy 

    if(pair.second !=0){
      return false;

    }

  }
  return true;

}



int main(){
  std::string word1 = "listen";
  std::string word2 = "siolent";

  if(isAnagram(word1,word2)){
    std::cout<<"True";

  }else{

    std::cout<<"False";
  }




  return 0;
}
