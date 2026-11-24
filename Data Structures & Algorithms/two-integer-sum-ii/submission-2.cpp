class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> result;
        int n = numbers.size();
        int n1 = n-1;
        int i=0;
        while(true){
            if(numbers[i] + numbers[n1] > target){
                n1 = n1-1;
            }
            else if(numbers[i] + numbers[n1] < target){
                i++;
            }
            else{
                
                result.push_back(i+1);
                result.push_back(n1+1);
                return result;
            }
            
        }
    }
};
