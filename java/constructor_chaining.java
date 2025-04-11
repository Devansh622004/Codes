class student{
    int roll, marks;
    student(int roll)                                // CONSTRUCTOR 1
    {
        this.roll = roll;
    }
    student(int roll, int marks){
        this(roll);                    // USED TO INVOKE CURRENT CLASS CONSTRUCTOR i.e. CONSTRUCTOR 1.
        this.marks = marks;
    }
    void display(){
        System.out.println(roll + " " + marks);
    }

    public static void main(String[] args){
        student s1 = new student(38);
        student s2 = new student(40, 75);
        s1.display();
        s2.display();
    }
}
