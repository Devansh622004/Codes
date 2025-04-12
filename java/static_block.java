//1) IT IS USED TO INITIALIZE STATIC DATA MEMEBERS.
//2) IT IS EXECUTED BEFORE MAIN METHOD AT THE TIME OF CLASSLOADING.

public class static_block {

    static

    {
        System.out.println("STATIC BOCK IS INVOKED.");
    }

    public static void main(String args[]){
        System.out.println("WE ARE IN MAIN METHOD.");
    }
}
