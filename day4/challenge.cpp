#include<iostream>
#include<vector>


int firstOccurance(const std::vector<int>& nums, int target){
  
  for (int i=0; i<nums.size();i++){

    if(nums[i] == target){

      return i;


    }


  }
  return -1;
  


}

int main () {

  std::vector<int> nums ={1,4,5,7,8,4};

  std::cout<<"The idex if: "<< firstOccurance(nums,4);
  return 0;

}
