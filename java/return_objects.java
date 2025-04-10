class sample{
    int x;
    void get(int a){
        x = a;
    }
    void display(){
        System.out.println("SUM = " + x);
    }
    sample sum(sample arg1, sample arg2){
        sample c = new sample();
        c.x = arg1.x + arg2.x;
        return c;
    }
}

class sum1{
    public static void main(String[] args){
        sample o1 = new sample();
        sample o2 = new sample();
        sample o3 = new sample();
        sample o4 = new sample();

        o1.get(10);
        o2.get(20);

        o4 = o3.sum(o1, o2);
        o4.display();
    }
}
