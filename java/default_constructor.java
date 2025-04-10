class cons{
    int a, b;
    cons(){
        a = 10;
        b = 20;
    }
    void display(){
        System.out.println("a = " + a + "\n" + "b = " + b);
    }
}

public class default_constructor {
    public static void main(String[] args){
        cons o = new cons();
        o.display();
    }
}
