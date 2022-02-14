class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>map_tab;
        for(int i = 0; i < nums.size(); i++){
            map_tab[nums[i]]++;
        }
        vector<int> result;
        priority_queue<pair<int, int>> prio_que;
        for(auto iter = map_tab.begin(); iter != map_tab.end(); iter++)
        {
            prio_que.push(make_pair(iter->second, iter->first));
            if(prio_que.size() > (int)map_tab.size()-k){
                result.push_back(prio_que.top().second);
                prio_que.pop();
            }
        }
        return result;
    }
};