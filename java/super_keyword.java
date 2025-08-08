// SUPER KEYWORD IS USED TO ACCESS SUPER CLASS HIDDEN MEMBERSIN DERIVED CLASS.

class vehicle{
    int speed = 60;
}

class bike extends vehicle{
    int speed = 90;
    void put(){
        System.out.println("SPEED OF VEHICLE: " + super.speed);
        System.out.println("SPEED OF BIKE IS: " + speed);
    }
}

public class super_keyword {
    public static void main(String[] args){
        bike obj = new bike();
        obj.put();
    }
}
