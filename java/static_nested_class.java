class outer{
    static int num = 10;
    static class inner{
        void msg(){
            System.out.println("NUMBER IS: " + num);
        }
    }

    public static void main(String args[]){
        outer.inner obj = new outer.inner();
        obj.msg();
    }
}