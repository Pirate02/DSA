#include<iostream>
#include<vector>


int findMax(const std::vector<int>& vector){

  int maxEl = vector[0];

  for (int i = 0; i < vector.size(); i++){

    if(vector[i] > maxEl){

      maxEl = vector[i];

    }


  }

  return maxEl;


}

int main(){
  std::vector<int> nums = {1,4,60,10,300};

  std::cout<<"The max is : "<< findMax(nums);

 return 0;

}


// fine working man i did it haha 
