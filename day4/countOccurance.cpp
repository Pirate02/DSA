#include<iostream>
#include<vector>



int countOccurance(const std::vector<int>& nums, int target ){
  
  int  count= 0;

  for (int num: nums ) {

    if(num == target){

      count++;

    }


  }

  return count;



}
int main () {


  std::vector<int> nums = { 1,2,4,5,2,7,2};

  std::cout<<"The occurance is : "<<countOccurance(nums,2);


  return 0;
}

// time complexity = O(n) and space complexity = O(1);
