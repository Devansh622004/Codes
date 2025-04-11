class demo2{
    int data = 10;
    void update(demo2 obj){
        obj.data = obj.data + 10;
    }
    void display(){
        System.out.println("DATA: " + data);
    }
}

public class callByRef {
    public static void main(String args[]){
        demo2 d = new demo2();
        System.out.println("BEFORE CALL BY VALUE: ");
        d.display();
        System.out.println("AFTER CALL BY VALUE: ");
        d.update(d);
        d.display();
    }
}
