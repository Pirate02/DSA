#include<iostream>

#include<vector>

int findMax(const std::vector<int>& nums){

  int max = nums[0];


  for(int num: nums){ // using int i = 1, i could reduce the operation but okay haha - i ma feeling there might be some edge caases here 
    if(num > max){
      max = num;

    }

  }

  return max;



}


int main(){


  std::vector<int> nums = {12,12,4,6,9};

  std::cout<<"Max: "<< findMax(nums);


  return 0;
}


// time complexity = O(n)
// space complexity = O(1)
