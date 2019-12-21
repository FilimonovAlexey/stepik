int linear_search(int arr[], int n, int arg){
    int res = -1;
    for (int i=0; i<n; i++) {
        if (arr[i] == arg) {
            res = i;
            break;
        }
    }
    return res;
}
