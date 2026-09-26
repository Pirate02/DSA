#include<iostream>
#include<string>


int countVowels(const std::string& word){

  int count = 0;

  for(char c : word){

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o'|| c== 'u'){ // i know there could be a better way like creating an array and checking if the char lies in there but .. 

      count++;


    }


  }

  return count;
}

int main(){

  std::string word = "thisisdumzan";

  std::cout<< "the count is : "<< countVowels(word);





  return 0;
}
