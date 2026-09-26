#include<iostream>
#include<string>


char noRepeat(const std::string& word){

  


  // i need a pointer to point at an index 
  // when similar letter is found I can start loop from next index than previous 



  for(int i =0; i < word.size(); i++){
    // i have to compare firsst char with all other chars 
    //
    // if loop goes all the way thorugh and doesn't find similar char than that is the char we need 
   
    // i think i need two loops 
    int count = 0;

    
    for(int j = 0; j < word.size(); j++){

      if(word[i] == word[j] ){

        count++;


      }



    }

  if(count == 1){

    return word[i];


  }




  }

  return '\0';



}

int main(){


  std::string word = "swiss";

  std::cout << "the char is : "<< noRepeat(word);
  return 0;
}

