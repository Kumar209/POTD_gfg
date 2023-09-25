class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        vector<int> res;
        
        //Step 1: Sort both Arrays
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        
        //Step 2 : Create max heap : <sum, <i, j>>
        priority_queue<pair< int , pair<int, int> > > pq;
        
        //Step 3: create a set to store indexs to max heap i, j
        set<pair<int, int> > st;
        
        //Step4 : Initialize heap with maximum sum i.e N-1 pos on both array
        pair<int, pair<int, int> > initP = make_pair((A[N-1] + B[N-1]), make_pair(N-1, N-1));
        pq.push(initP);
        st.insert(make_pair(N-1, N-1));
        
        //STEP5: Iterate till k
        for(int i=0; i<K; i++){
            pair<int, pair<int, int> > top = pq.top();
            pq.pop();
            
            res.push_back(top.first);

            int j = top.second.first;
            int k = top.second.second;
        
        // Insert (A[j - 1] + B[k], (j - 1, k)) into max heap
        if (j > 0) {
            pair<int, int> temp1 = make_pair(j - 1, k);

            if (st.find(temp1) == st.end()) {
                pq.push(make_pair(A[j - 1] + B[k], temp1));
                st.insert(temp1);
            }
        }

        // Insert (A[j] + B[k - 1], (j, k - 1)) into max heap
        if (k > 0) {
            pair<int, int> temp2 = make_pair(j, k - 1);

            if (st.find(temp2) == st.end()) {
                pq.push(make_pair(A[j] + B[k - 1], temp2));
                st.insert(temp2);
            }
        }
        }
        
        
        return res;
    }
};