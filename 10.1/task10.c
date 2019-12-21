int is_prime(int k){
    for(int i = 1; i<=k; i++) {
      if(k%i==0 && i != 1 && i != k) return 0;
    }
    return 1;
}