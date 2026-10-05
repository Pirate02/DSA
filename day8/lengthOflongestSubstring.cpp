#include<iostream>
#include<string>
#include<unordered_set>



int lengthOfLongestSubstring(const std::string& word){

  std::unordered_set<char> seen;
  int currentLength= 0;
  int maxLength = 0;
  int left = 0;

  for(int right = 0; right < word.size(); right++){

    while(seen.count(word[right])){
      seen.erase(word[left]);
      left++;


    }

    seen.insert(word[right]);
    currentLength = right - left + 1;

    if(currentLength > maxLength){
      maxLength = currentLength;

    }


  }

  return maxLength;



}


int main (){

  std::string word = "abccdec";

  std::cout<<lengthOfLongestSubstring(word);


  return 0;
}
