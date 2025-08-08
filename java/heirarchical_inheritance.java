import java.util.Scanner;

// Parent class
class student3 {
    int rollno;
    String name;
    Scanner s = new Scanner(System.in);

    public void getdata() {
        System.out.println("ENTER ROLL NO.: ");
        rollno = s.nextInt();
        s.nextLine(); // consume leftover newline
        System.out.println("ENTER NAME: ");
        name = s.nextLine();
    }

    public void display() {
        System.out.println("ROLL NO. = " + rollno);
        System.out.println("NAME = " + name);
    }
}

// Child class of student2
class bca extends student3 {
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

class mca extends student3{
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

public class heirarchical_inheritance {
    public static void main(String[] args) {
        bca obj1 = new bca();
        obj1.get();
        obj1.putdata();

        mca obj2 = new mca();
        obj2.get();
        obj2.putdata();
    }
}
