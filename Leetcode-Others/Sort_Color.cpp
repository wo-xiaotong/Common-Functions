//class Solution {
//public:
//    void sortColors(vector<int>& nums) {
//        int size=nums.size();
//        int index1=0,index2=0;
//        
//        while(index2<size){
//            while(index1<size && nums[index1]==0)++index1;
//            index2=index1+1;
//            while(index2<size && nums[index2]!=0)++index2;
//            
//            if(index2<size){
//                nums[index2]=nums[index1];
//                nums[index1]=0;
//            }
//        }
//        
//        index1=index2=0;
//        while(nums[index1]==0)++index1;
//        
//        while(index2<size){
//            while(index1<size && nums[index1]==1)++index1;
//            index2=index1+1;
//            while(index2<size && nums[index2]!=1)++index2;
//            
//            if(index2<size){
//                nums[index2]=2;
//                nums[index1]=1;
//            }
//        }    
//    }
//};