#include<iostream>
#include<vector>
#include<unordered_map>



int firstDuplicate(const std::vector<int>& nums){


  std::unordered_map<int,int> map;

  for(int num: nums){

    if(map.count(num)){

      return num;

    }

    map[num]++;


  }

  return -1;


}

// time complexity - O(n) - worst case | space - O(n) 

int main(){
   
  std::vector<int> nums = {4,2,7,2,9,4};

  int result = firstDuplicate(nums);

  if(result== -1){

    std::cout<<"No duplicate element";
    

  }else {
    std::cout<<"Duplicate el : " << result;
  }


  return 0;



}
