class meher{
    void m(meher obj){
        System.out.println("METHOD IS INVOKED.");
    }
    void n(){
        m(this);              // PASSED AS AN ARG.
    }
    public static void main(String[] args){
        meher a = new meher();
        a.n();
    }
}
