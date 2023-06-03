void main (int n){
    int a;
    a = n;
    while (a < 10) {
        print a;
        if (a == 2) {
            print a;
            break;
        }
        a = a + 1;
    }
}