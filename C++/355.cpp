class Twitter {
private:
    map<int, vector<int>> follows;
    vector<int> posts{};
    unordered_map<int, int> tweetBy;
public:
    Twitter() {   
        for(int i = 1 ; i < 501 ; i++) {
            vector<int> v{};
            follows[i] = v;
        }
    }
    
    void postTweet(int userId, int tweetId) {
        posts.push_back(tweetId);
        tweetBy.insert({tweetId, userId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> ans{};
        int i = size(posts) - 1;
        while(size(ans) < 10 && i >= 0) {
            int currPost = posts[i--];
            
            auto tb = tweetBy.find(currPost);
            int tbid = tb->second;
            
            if(tbid == userId) {
                ans.push_back(currPost);
                continue;
            }
            
            auto followList = follows.find(userId);
            vector<int> followVec = followList->second;
            if(count(followVec.begin(), followVec.end(), tbid) >= 1)
                ans.push_back(currPost);
        }
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        auto followList = follows.find(followerId);
        vector<int> followVec = followList->second;
        
        followVec.push_back(followeeId);
        follows[followerId] = followVec;
    }
    
    void unfollow(int followerId, int followeeId) {
        auto followList = follows.find(followerId);
        vector<int> followVec = followList->second;
        
        followVec.erase(remove(followVec.begin(), followVec.end(), followeeId), followVec.end());
        follows[followerId] = followVec;
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */