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
    for(a;a > 2;a = a - 1){
        if(a == 8){
            a = a - 2;
            continue;
        }
        print a;
    }
}