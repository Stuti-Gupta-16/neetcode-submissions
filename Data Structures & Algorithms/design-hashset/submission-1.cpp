class MyHashSet {
    vector<int> h;
public:

    MyHashSet() {
        
    }
    
    void add(int key) {
        if(contains(key)==false){
            h.push_back(key);
        }
    }
    
    void remove(int key) {
        int p=-1;
        for(int i=0;i<h.size();i++){
            if(h[i]==key) {
                p=i;
                break;
            }
        }
        if(p!=-1) h.erase(h.begin()+p);
        
    }
    
    bool contains(int key) {
        for(int i=0;i<h.size();i++){
            if(h[i]==key) return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */