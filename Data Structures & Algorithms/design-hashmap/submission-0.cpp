#include <algorithm>
class MyHashMap {
public:
    private:
        vector<pair<int, int>>hash;
   public:
    MyHashMap() {}
    
    void put(int key, int value) {
        for(auto &i: hash){
            if(i.first==key){
                i.second=value;
                return;
            }
        }
        hash.push_back({key, value});
    }
    
    int get(int key) {
        for(auto &i: hash){
            if(i.first==key){
                return i.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int val = get(key);
         if (val == -1) return; 
        hash.erase(std::remove(hash.begin(),hash.end(),pair<int, int>(key, val)), hash.end());
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */