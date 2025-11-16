class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int n = nums.size();
        int x = INT_MIN;
        int y = INT_MIN;
        int z = INT_MAX;
        for(int a: nums){
            if(a>x){
               y=x; 
                x=a;
            }else if(a>y){
                y=a;
            }
            z=min(z,a);
        }
        return x+y-(z);
    }
};