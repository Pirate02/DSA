#include<iostream>
#include<vector>
#include<unordered_map>

bool hasDublicate(const std::vector<int>& nums){

  std::unordered_map<int,int> map;


  for(int num: nums){

    if(map.count(num)){
      return true;


    }

    map[num]++;


  }

  return false;



}

// time complexity - O(n) | space - O(n)


int main(){

  std::vector<int> nums ={1,7,7,2};

  if(hasDublicate(nums)){
    std::cout<<"True";

  }else{

    std::cout<<"False";

  }



  return 0;

}
