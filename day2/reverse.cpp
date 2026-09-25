#include<iostream>
#include<vector>

/**std::vector<int> reverseVector(const std::vector<int>& vector){

  std::vector<int> reversed;

  for(int num : vector){

    reversed.insert(reversed.begin(),num);




  }

  return reversed;




}

*/



// new method - swap


void reverseVector(std::vector<int>& nums){ // we don't need to return vector i think becuase it is passed by reference which will change the actual vector in main fun;

  int left = 0;
  int right = nums.size()-1;

  while(left<right){

    std::swap(nums[left], nums[right]);

    left++;
    right--;


  }




}


int main (){

  std::vector<int> nums = {1,2,3,4,5};

  
  reverseVector(nums);


  for(int num : nums){

    std::cout<<num<<" ";


  }



  return 0;
}

// i know ths is not optimal but anyways  i did my way haha .
