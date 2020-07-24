int Solution::trap(const vector<int> &A) {
    int n=A.size();
    int stored_water=0;
    for(int water_bar=1;water_bar<n-1;water_bar++){
        int max_left_bar=A[water_bar];
        for(int bar_side=0;bar_side<water_bar;bar_side++){
            max_left_bar=max(max_left_bar,A[bar_side]);
        }
        int max_right_bar=A[water_bar];
        for(int bar_side=water_bar+1;bar_side<n;bar_side++){
            max_right_bar=max(max_right_bar,A[bar_side]);
        }
        stored_water=stored_water+min(max_left_bar,max_right_bar)-A[water_bar];
    }
    return stored_water;
}
