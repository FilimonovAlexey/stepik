int abs_arr(int arr[], int n){
int counter = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] < 0) {
            counter++;
            arr[i] *= -1;   
        }
    }
    return counter;
}