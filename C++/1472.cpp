class BrowserHistory {
private:
    string home;
    vector<string> history;
    int counter;
public:
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        counter = 0;
    }
    
    void visit(string url) {
        history.erase(history.begin()+counter+1, history.end());
        history.push_back(url);
        counter++;
    }
    
    string back(int steps) {
        counter = max(counter-steps, 0);
        return history[counter];
    }
    
    string forward(int steps) {
        // counter = min((int) history.size(), counter+steps);
        counter=min((int)(history.size()-1),(int)(counter+steps));
        return history[counter];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */