// two sum with hasmap

#include<iostream>
#include<vector>
#include<unordered_map>


std::vector<int> twoSum(const std::vector<int>& nums, int target){

  std::unordered_map<int, int> frequency;

  std::vector<int> result;


  for (int i = 0; i<nums.size(); i++) {

    int required = target - nums[i];

    if(frequency.count(required)){

      result.push_back(i);
      result.push_back(frequency[required]);

      return result;



    }

    frequency[nums[i]]= i;
  }

  return {}; // this is an empty vector which I can return when no index matches






}


int main () {

  std::vector<int> nums = {2,7,11,15};

  std::vector<int> result = twoSum(nums, 9);

  for(int num: result){
    std::cout<< num << " ";

  }

  return 0;

}
