#include<iostream>
#include<vector>



int sumVector(const std::vector<int>& vector){ // const prevents modifying and & avoids copying - reference accessed

  int total = 0;


  for (int num : vector ){

    total += num;

  }

  return total;



}


int main (){

  //std::vector<int> nums = {1,2,3,4,5,10};

  //std::cout << "the sum is : " << sumVector(nums);
  
  //this works fine but I am trying to take elements from user 


  std::vector<int> nums;

  int size;

  std::cout<<"enter the size of the vector"<<"\n";
  std::cin >> size;

      
  for(int i = 0; i < size; i++){
    int n;

     std::cout << "enter elements : " ;
     std::cin >> n;

     nums.push_back(n);


  }


  std::cout << "The sum is : " << sumVector(nums);




 return 0;
}
