class SmallestInfiniteSet {
    set<int> st;
public:
    SmallestInfiniteSet() {
        for(int i = 1; i < 1001; ++i) st.insert(i);
    }
    
    int popSmallest() {
        int t = *st.begin();
        st.erase(t);
        return t;
    }
    
    void addBack(int num) {
        st.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */