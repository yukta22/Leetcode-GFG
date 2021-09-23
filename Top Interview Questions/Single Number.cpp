//https://leetcode.com/problems/single-number/


/////////////////////////////////////////////////////////////////////////////////

int singleNumber(vector<int>& nums) {
  unordered_map<int,int> mpp;

  
  for(int i = 0 ; i < nums.size() ; i++){
    mpp[nums[i]]++;        
  }
  
  for(int i = 0 ; i < nums.size() ; i++ ){
    
    if(mpp[nums[i]] == 1){
      return nums[i];
    }
    
  }
  
  return -1;
}

////////////////////////////////////////////////////////////////////////////////

int singleNumber(vector<int>& nums) { 
   
  int ans  = 0;
   
  for(int i=0;i<nums.size();i++){
       ans  ^= nums[i] ;
  }     
  
  return ans;
}







