class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;

        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }

        std::vector<int> num(s.begin(), s.end());
        int max = 0;
        sort(num.begin(), num.end());

        for(int i=0; i<num.size(); i++){
            if(s.find(num[i]-1) !=s.end()){
                continue;
            }
            else{
                int count = 1;
                for(int j=i; j<num.size()-1; j++){
                    if(num[j]+1==num[j+1]){
                        count++;
                    }
                    else{
                        break;
                    }
                }
                if(max < count){
                    max = count;
                }
            }
        }
        return max;


    }
};
