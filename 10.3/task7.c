int gcd(int x, int y){
    while (x !=0 && y != 0) {
        if (x > y ) x %= y;
        else y %= x;
    }
    return x+y;
} 

void reduce_fraction(int * a, int * b){
    int x = *a, y = *b;
    int del = gcd (x, y);
    *a /= del;
    *b /= del;
}