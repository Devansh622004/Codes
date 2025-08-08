import java.util.Scanner;

class student1 {
    int rollno;
    String name;

    Scanner s = new Scanner(System.in);

    public void getdata() {
        System.out.println("ENTER ROLL NO.: ");
        rollno = s.nextInt();
        s.nextLine(); // consume the leftover newline
        System.out.println("ENTER NAME: ");
        name = s.nextLine();
    }

    public void display() {
        System.out.println("ROLL NO. = " + rollno);
        System.out.println("NAME = " + name);
    }
}

class test1 extends student1 {
    int sub1, sub2;

    void get() {
        getdata();
        System.out.println("ENTER MARKS1: ");
        sub1 = s.nextInt();
        System.out.println("ENTER MARKS2: ");
        sub2 = s.nextInt();
    }

    void putdata() {
        display();
        System.out.println("MARKS1 = " + sub1);
        System.out.println("MARKS2 = " + sub2);
    }
}

public class Single_inheritance {
    public static void main(String[] args) {
        test1 obj = new test1();
        obj.get();
        obj.putdata();
    }
}
