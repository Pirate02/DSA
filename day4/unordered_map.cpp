#include<iostream>
#include<vector>
#include<unordered_map>



void countFrequency(const std::vector<int>& nums){

  std::unordered_map<int, int> frequency;

  for(int num: nums){

    frequency[num]++;


  }


  for(auto pair: frequency){

    std::cout<<pair.first << " -> " << pair.second << "\n";


  }


}

int main(){

  std::vector<int> nums ={2,7,2,7,5,2};

  countFrequency(nums);




  return 0;
}
