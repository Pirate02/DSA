#include<iostream>
#include<vector>


int coutOccurance(const std::vector<int>& vector, int target){

  int count = 0;

  for(int num : vector){

    if(num == target){

      count++;

    }



  }

  return count;

}


int main(){


  std::vector<int> nums = {1,2,4,4,6,2,6,2};

  int target = 2;

  std::cout<<"The count is : "<< coutOccurance(nums, target);


  return 0;
}



// yeahhh buddy it works and did on my own. 
// i could make it take from user but its fine I can do that if I wanted to. 
