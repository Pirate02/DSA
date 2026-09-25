#include<iostream>
#include<vector>


int findBigIndex (const std::vector<int>& vector){

  int index = 0;
  int largestEl = vector[0];


  for(int i=0; i<vector.size();i++){ // one improvement is I can start loop with 1 since 0 is already a candidate. (from reviewer) 

    if(vector[i] > largestEl){

      largestEl = vector[i];

      index = i;


    }

  



  }

  return index;

}


int main (){

  std::vector<int> nums ={10,5,6,8,3,9};

  std::cout<<"The index is : "<< findBigIndex(nums);



  return 0;
}

// i don't know if there is any better way but I did it haha 
