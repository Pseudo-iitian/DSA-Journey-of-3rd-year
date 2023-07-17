vector<int> Solution::plusOne(vector<int> &A) {
    int n = A.size() - 1;
    vector<int> ans(1, 1);
    if (A[0] == 0 && A.size() == 1) {
        return ans;
    }
     // Remove leading zeros if present
    while (A[0] == 0 && A.size() > 1) {
        A.erase(A.begin());
        n--;
    }
    
    for (int i = n; i >= 0; i--) {
        if (A[i] >= 0 && A[i] <= 8) {
            A[i] += 1;
            return A;
        } else {
            A[i] = 0;
        }
    }
    
    A.insert(A.begin(), 1);
    return A;
}

//Interview Bit .. 