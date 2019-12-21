int binary_search(int arr[], int n, int arg){
  int first = 0;
  int last = n;
  int res = -1;

  while (last >= first) {
    int mid = (last + first) / 2;

    if ( arg < arr[mid]) {
        last = mid - 1;
    } else if (arg > arr[mid]) {  
        first = mid + 1;
    } else {
        res = mid;
        break;
    }
  }
  return res;	   
}