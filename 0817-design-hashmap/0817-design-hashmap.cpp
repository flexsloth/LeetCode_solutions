class MyHashMap {
public:
    vector<pair<int,int>>v;
    MyHashMap() {
        vector<pair<int,int>>v;
    }
    
    void put(int key, int value) {
        bool flag = false;
        for(auto &i:v){
            if(i.first == key){
                flag = true;
                i.second = value;
            }
        }
        if(!flag){
            v.push_back(make_pair(key,value));
        }
    }
    
    int get(int key) {
        for(auto i : v)
            if(i.first == key)  
                return i.second;
        return -1;
    }
    
    void remove(int key) {
        for(int i = 0 ; i < v.size() ; i++){
            if(v[i].first == key)
                v.erase(v.begin()+i);
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */