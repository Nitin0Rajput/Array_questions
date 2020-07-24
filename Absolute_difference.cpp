int Solution::maxArr(vector<int> &A) {
    int n=A.size();
    int total_difference=0;
    for(int first_value=0;first_value<n;first_value++){
        for(int secnd_value=1;secnd_value<n;secnd_value++){
            //as given |A[i] - A[j]| + |i - j|,so the absolute_difference_sum is
           int absolute_difference_sum=abs(A[first_value]-A[secnd_value])+abs(first_value-secnd_value);
        if(absolute_difference_sum>total_difference){
            total_difference=absolute_difference_sum;
        }
            
        }
    }
    return total_difference;
}
