int minmax(int arr[], int n, int fl){
    int res = 0;
    if (fl) {
        res = -999999;
        for (int i=0; i<n; i++) {
            if (res < arr[i]) res = arr[i];
        }
    } else {
        res = 999999;
        for (int i=0; i<n; i++) {
            if (res > arr[i]) res = arr[i];
        }
    }
    return res;
}