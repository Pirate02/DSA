#include<iostream>
#include<vector>




int findIndex(const std::vector<int>& nums, int target){

  for (int i=0; i< nums.size(); i++){
    if(nums[i] == target){

      return i;


    }


  }

  return -1;



}

int main(){

  
  std::vector<int> nums = {12,45,67,74,86};

  int result = findIndex(nums, 98);

  if(result == -1){

    std::cout<<"Index not found !! ";

  }else{
    std::cout<<"The index is : "<< result<<"\n";

  }



  return 0;
}

// time complexity = O(n);
// space comeplexity = O(1)

