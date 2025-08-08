import java.util.Scanner;

// Parent class
class student2 {
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

// INTERMEDIATE BASE CLASS
class test2 extends student2 {
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

// Child class of test2
class total extends test2 {
    public void calculate() {
        System.out.println("TOTAL MARKS = " + (sub1 + sub2));
    }
}

// Main class
public class multilevel_inheritance {
    public static void main(String[] args) {
        total obj = new total();  // Create object of total, not test2
        obj.get();
        obj.putdata();
        obj.calculate();
    }
}
