#include<iostream>
#include<string>
#include<cctype>


int countDigits(const std::string& word){

  int count = 0;

  for (char c : word ) {

    if(isdigit(c)){

      count++;

    }


  }

  return count;

  
// i think i did good here 

}

int main(){

  std::string word =  "abc123thisist35t";

  std::cout<<"the count is :  " << countDigits(word);

  return 0;
}
