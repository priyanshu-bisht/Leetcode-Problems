class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        for(int i=0; i<nums.size(); i+=2)
        {
            int a = nums[i]; int b = nums[i+1];
            while(a--) v.push_back(b);
        }
        return v;
    }
};