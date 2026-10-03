#include<iostream>
#include<vector>
#include<unordered_set>


std::vector<int> intersection(const std::vector<int>& nums1, const std::vector<int>& nums2){

  std::unordered_set<int> set1;
  std::unordered_set<int> set2;

  std::vector<int> result;

  for(int num: nums1){
    set1.insert(num);
  }

  for(int num: nums2){
    if(set1.count(num)){
      if(!set2.count(num)){
        set2.insert(num);
        result.push_back(num);

      }

    }

  }

  return result;




}


// time complexity - O(n+m) space - O(n+m) // i don't really understand why +m 

int main(){

  std::vector<int> nums1 = {1,2,2,3,4};
  std::vector<int> nums2 = {2,2,5,4};

  std::vector<int> result = intersection(nums1, nums2);

  for(int num: result){

    std::cout<<num<<" ";

  }


  return 0;

}


