class demo{
    int data = 10;
    void update(int x){
        data = data + x;
    }
    void display(){
        System.out.println("DATA: " + data);
    }
}

public class callByValue {
    public static void main(String args[]){
        demo d = new demo();
        System.out.println("BEFORE CALL BY VALUE: ");
        d.display();
        System.out.println("AFTER CALL BY VALUE: ");
        d.update(10);
        d.display();
    }
}
