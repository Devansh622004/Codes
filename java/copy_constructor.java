class cpycons{
    int rollno;
    String name;
    cpycons(int a, String s) {
        rollno = a;
        name = s;
    }
    cpycons(cpycons c){
        rollno = c.rollno;
        name = c.name;
    }

    void display(){
        System.out.println("ROLLNO. : " + rollno + "\n" + "NAME : " + name);
    }
}

public class copy_constructor {
    public static void main(String[] args){
        cpycons cp = new cpycons(2220038, "MEHER BABA");  // DEFAULT CONST. INVOKED
        cpycons cp2 = new cpycons(cp);                          // COPY CONST. INVOKED

        cp.display();
        cp2.display();
    }
}
