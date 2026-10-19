class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count; //hash map to store frequency of each number

        for(int num:nums){
            count[num]++;
        }

        vector<pair<int,int>> arr;
        for(const auto& p: count){
            arr.push_back({p.second,p.first});  //list of frequency and number pairs from the list
        }

        sort(arr.begin(),arr.end());

        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(arr[arr.size() - 1 - i].second);
        }
        return res;
    }
};
