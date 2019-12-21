void minmax(int * x, int * y){
    if (*x > *y) {
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }
}