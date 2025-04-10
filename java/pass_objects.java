class abc{
    int a, b;
    void get(){
        a = 10;
        b = 20;
    }
    int sum(abc m){
        return (m.a + m.b);
    }
}

class sum{
    public static void main(String[] args){
        abc o = new abc();
        abc o2 = new abc();

        o.get();
        int result = o2.sum(o);
        System.out.println("SUM = " + result);
    }
}



