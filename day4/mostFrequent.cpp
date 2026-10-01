#include<iostream>
#include<vector>
#include<unordered_map>



int mostFrequent(const std::vector<int>& nums){

  std::unordered_map<int, int> frequency;
  int higherFrequency = 0;
  int mostFrequentNumber = 0;




  for(int num: nums){

    frequency[num]++;

  }

  for(const auto& pair: frequency ){

    if(pair.second > higherFrequency || // this is peak - i understood this
      ( pair.second == higherFrequency && pair.first < mostFrequentNumber )){
      higherFrequency = pair.second;
      mostFrequentNumber = pair.first;

    }

    

  }

  return mostFrequentNumber;


}


int main(){

  std::vector<int> nums = {2, 7, 2, 5, 7, 2, 5, 5};

  std::cout<<"the most frequent number is : "<< mostFrequent(nums);
  return 0;
}
