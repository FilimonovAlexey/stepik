void sort_arr(int arr[], int n, int fl){
    void qsortMinMax (int array[], int first, int end) {
       int a = first;
       int b = end;
       int mid = array[(a+b)/2];
         
       while (a <= b) {
           while (array[a] < mid) {
                a++;   
           }
           while (array[b] > mid) {
                b--;   
           }
           if (a <= b) {   
               int temp = array[a];
               array[a] = array[b];
               array[b] = temp;
               a++;
               b--;
           }
           
       }
       if (first < b) qsortMinMax(array, first, b);
       if (end > a) qsortMinMax(array, a, end);
    }
    void qsortMaxMin (int array[], int first, int end) {
       int a = first;
       int b = end;
       int mid = array[(a+b)/2];
         
       while (a <= b) {
           while (array[a] > mid) {
                a++;   
           }
           while (array[b] < mid) {
                b--;   
           }
           if (a <= b) {   
               int temp = array[a];
               array[a] = array[b];
               array[b] = temp;
               a++;
               b--;
           }
           
       }
       if (first < b) qsortMaxMin(array, first, b);
       if (end > a) qsortMaxMin(array, a, end);
    }
    
    if (fl ) qsortMaxMin (arr, 0, n-1);
    else qsortMinMax (arr, 0, n-1);
    
}