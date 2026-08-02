
class MyHashSet {
private:
    vector<int>nums;
public:
    MyHashSet() {}        
    void add(int key) {
         if (!contains(key)) {
            nums.push_back(key);
        }
    }
    
    void remove(int key) {
        nums.erase(std::remove(nums.begin(), nums.end(), key), nums.end());
    }
    
    bool contains(int key) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key)return true;

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