#include<iostream>
#include<vector>
#include<unordered_map>


bool containsNearbyDuplicate(const std::vector<int>& nums, int k){

  std::unordered_map<int,int> lastSeen;


  for(int i= 0; i<nums.size(); i++){
    if(lastSeen.count(nums[i])){
      if(i- lastSeen[nums[i]]<= k){
        return true;

      }

    }
    lastSeen[nums[i]]=i;
  }

  return false;
}



int main(){

  std::vector<int> nums={1,4,2,3,1};
  int result = containsNearbyDuplicate(nums,3);
  
  if(result){
    std::cout<<"True";

  }else{std::cout<<"False";}


  return 0;
}
