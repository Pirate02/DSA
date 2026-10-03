#include<iostream>
#include<vector>
#include<unordered_set>



std::vector<int> removeDuplicate(const std::vector<int>& nums){
  std::unordered_set<int> seen;

  std::vector<int> unique;

  for (int num: nums){
    if(!seen.count(num){
      unique.push_back(num);
      seen.insert(num);
    }

  }

  return unique;

}

int main(){


  std::vector<int> nums = {2,7,2,5,7,2};

  std::vector<int> result = removeDuplicate(nums);

  for(int num: result){
    std::cout<<num<<" ";

  }


  return 0;

}
