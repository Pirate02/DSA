#include<iostream>
#include<vector>

int findMin(const std::vector<int>& nums){

  int min = nums[0];

  for (int i = 1; i<nums.size();i++){

    if(nums[i]< min){

      min = nums[i];

    }



  }

  return min;



}

int main(){

  std::vector<int> nums = {5,3,6,7,8,2};

  std::cout<<"Min is  : "<< findMin(nums);

  return 0;

}
