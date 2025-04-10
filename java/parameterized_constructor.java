class paracons{
    int rollno;
    String name;
    paracons(int a, String s){
        rollno = a;
        name = s;
    }
    void display(){
        System.out.println("ROLLNO. : " + rollno + "\n" + "NAME : " + name);
    }
}

public class parameterized_constructor {
    public static void main(String[] args){
        paracons p = new paracons(2220038, "Meher");
        p.display();
    }
}
