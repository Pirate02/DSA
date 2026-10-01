#include<iostream>
#include<vector>


bool constains(const std::vector<int>& nums, int target){

  for(int num : nums ){
    if(num == target){

      return true;

    }

  }


  return false;

}


int main() {

  std::vector<int> nums = {1,4,7,9};

  if(constains(nums,6)){
    std::cout<<"True"<<"\n";

  }else{

    std::cout<<"False"<<"\n";
  }

  return 0;
}

// time complexity = O(n);
// space comeplexty = O(1)
