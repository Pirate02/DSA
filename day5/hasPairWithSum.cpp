#include<iostream>
#include<vector>
#include<unordered_map>


bool hasPairWithSum(const std::vector<int>& nums,int target){

  std::unordered_map<int,int> seen;

  for(int num: nums){

    int required = target - num;

    if(seen.count(required)){
      return true;

    }

    seen[num]++;


  }

  return false;


}


int main(){

  std::vector<int> nums = {3,8,4,7};

  if(hasPairWithSum(nums,20)){
    std::cout<<"Yes";

  }else{
    std::cout<<"No";

  }

  return 0;
}
