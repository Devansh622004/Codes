class college{
    int roll;
    String  name;
    static String c_name = "TIMT";     // STATIC VARIABLE IS USED TO SAVE MEMORY ITS VALUE NEED TO BE DECLARE ONLY ONE TIME AND IT REMAINS SAME THROUGHOUT PROGRAM.
    // STATIC VARIABLES ALSO KNOWN AS GLOBAL VARIABLES, CLASS VARIABLES, 
    college(int r, String n){
        roll = r;
        name = n;
    }

    void display(){
        System.out.println(roll + " " + name + " " + c_name);
    }

    public static void main(String[] args) {
        college c = new college(38, "Meher");
        college c2 = new college(40, "Sai");
        c.display();
        c2.display();
    }
}