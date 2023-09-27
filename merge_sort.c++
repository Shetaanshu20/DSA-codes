void merge(vector<int>& arr, int l,int mid, int r){
    int left=l;
    int right=mid+1;
    vector<int>v;
    while(left<=mid&&right<=r){
        if(arr[left]>=arr[right]) v.push_back(arr[right++]) ;
        else if(arr[left]<arr[right]) v.push_back(arr[left++]);
    }
    while(left<=mid) v.push_back(arr[left++]);
    while(right<=r)v.push_back(arr[right++]) ;

    for(int i=l;i<=r;i++){
        arr[i]=v[i-l];
    }
}
void mergeSort(vector<int>& arr, int l, int r) {


    if(l>=r) return;
long long mid =l+(r-l)/2;
    mergeSort(arr, l,mid);
    mergeSort(arr, mid+1,r);
    merge(arr,l,mid,r);
    return;
}