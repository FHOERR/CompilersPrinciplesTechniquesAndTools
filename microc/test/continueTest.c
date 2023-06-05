void main (int n){
    int a;
    a = n;
    while (a < 10) {
        if (a == 8) {
            a = a + 1;
            continue;
        }
        print a;
        a = a + 1;
    }
}