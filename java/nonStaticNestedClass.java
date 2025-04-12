class out{
    int count;
    public void display(){
        for(int i = 0; i < 5; i++){
            class inner{
                public void show(){
                    System.out.println("Inside inner " + (count++));
                }
            }
            inner in = new inner();
            in.show();
        }
    }
}

class test{
    public static void main(String args[]){
        out ot = new out();
        ot.display();
    }
}