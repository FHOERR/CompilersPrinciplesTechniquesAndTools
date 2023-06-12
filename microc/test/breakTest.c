void main (int n){
    int a;
    a = n;
    int b;
    b = 0;
    while (a < 11) {
        print a;
        while (b < 3){
            print -1;
            break;
            b = b + 1;
        }
        a = a + 1;
        if(a == 9){
            break;
        }
    }

    for (a;a > 5;a = a - 1){
        print a;
        if (a == 7){
            print a;
            break;
        }
    }
}