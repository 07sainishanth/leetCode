class FrontMiddleBackQueue {
// deque<int> a, b;
//     void a2b() {
//         if (a.size() <= b.size()) return;
//         b.push_front(a.back());
//         a.pop_back();
//     }
//     void b2a() {
//         if (b.size() <= a.size() + 1) return;
//         a.push_back(b.front());
//         b.pop_front();
//     }
// public:
//     FrontMiddleBackQueue() {}
//     void pushFront(int val) {
//         a.push_front(val);
//         a2b();
//     }
//     void pushMiddle(int val) {
//         a.push_back(val);
//         a2b();
//     }
//     void pushBack(int val) {
//         b.push_back(val);
//         b2a();
//     }
//     int popFront() {
//         if (a.empty() && b.empty()) return -1;
//         int ans;
//         if (a.empty()) {
//             ans = b.front();
//             b.pop_front();
//         } else {
//             ans = a.front();
//             a.pop_front();
//             b2a();
//         }
//         return ans;
//     }
//     int popMiddle() {
//         if (a.empty() && b.empty()) return -1;
//         int ans;
//         if (a.size() == b.size()) {
//             ans = a.back();
//             a.pop_back();
//         } else {
//             ans = b.front();
//             b.pop_front();
//         }
//         return ans;
//     }
//     int popBack() {
//         if (a.empty() && b.empty()) return -1;
//         int ans = b.back();
//         b.pop_back();
//         a2b();
//         return ans;
//     }
// };

    public:
    vector<int> vec;
    FrontMiddleBackQueue() {
    }
    
    void pushFront(int val) {
        vec.insert(vec.begin(),val);
    }
    
    void pushMiddle(int val) {
        vec.insert(vec.begin()+vec.size()/2,val);
    }
    
    void pushBack(int val) {
        vec.push_back(val);
    }
    
    int popFront() {
        if(vec.size() == 0)
            return -1;
        int value = vec[0];
        vec.erase(vec.begin());
        return value;
    }
    
    int popMiddle() {
        if(vec.size() == 0)
            return -1;
        int value = vec[(vec.size()-1)/2];
        vec.erase(vec.begin()+(vec.size()-1)/2);
        return value;
    }
    int popBack() {
        if(vec.size() == 0)
            return -1;
        int value = vec[vec.size() -1];
        vec.pop_back();
        return value; 
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */