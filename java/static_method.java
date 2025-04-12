//1) STATIC METHODS ARE ALSO KNOWN AS "CLASS METHODS".
//2) STATIC METHODS CAN BE INVOKED WITHOUT NEED OF CREATING INSTANCE.
//3) STATIC METHODS CAN CHANGE AND ACCESS THE VALUES OF STATIC DATA MEMBERS.

class num{
    static int cube(int a){
        return a*a*a;
    }

    public static void main(String args[]){
        int result = num.cube(2);
        System.out.println("CUBE IS :- " + result);
    }
}