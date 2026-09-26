#include<iostream>
#include<vector>


bool isPalindrome(const std::vector<int>& nums){ // const because i dont have to change the vector and no & becuase I just need to read the vector.

  int left  = 0;
  int right = nums.size() - 1;


  while(left<right){
    if(nums[left]!=nums[right]){
      return false;


    }

    left++;
    right--;

  }

  return true;



}

int main(){


  std::vector<int> nums = {1,5,3,2,1};

  if(isPalindrome(nums)){

    std::cout<<"The vector is palindrome.";


  }else{

    std::cout<<"The vector is not palindrome.";

  }



  return 0;
}
