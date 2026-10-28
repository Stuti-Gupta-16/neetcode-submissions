class StockSpanner {
public:
    stack<pair<int,int>> s;
    int i;
    StockSpanner() {
        i=0;
    }
    
    int next(int price) {
        int a;
        while(!s.empty() && s.top().first<=price) s.pop();
        if(!s.empty()) a=i-s.top().second;
        else a=i+1;
        s.push({price,i});
        i++;
        return a;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */