void main (){
    int a;
    a = 1;
    for(a; a < 5;a = a + 1){
        print a;
        if(a % 2 == 1) {
            continue;
        }
        int b;
        b = a;
        for(b; b < 8; b = b + 1){
            if(b % 2 == 1) {
                continue;
            }
            print b * -1;
        }
    }
}