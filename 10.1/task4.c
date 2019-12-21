int factorial(int k){
    int fact = 1;
    for (int i=1; i<=k; i++) {
        fact *=i;
    }
    return fact;
}

int main(void){
    int k;
    scanf("%d", &k);
    
    printf("%d", factorial(k));
    
    return 0;
}
