class roomarea{
    int l, b;
    roomarea(int x, int y){
        l = x;
        b = y;
    }
    int area(){
        return (l*b);
    }
}

class roomvolume extends roomarea{
    int h;
    roomvolume(int x, int y, int z){
        super(x, y);         // super(x, y) calls the constructor of the superclass (roomarea(int x, int y)) and passes x and y to it.
        h = z;
    }
    int volume(){
        return (l*b*h);
    }
}

public class super_keyword3 {
    public static void main(String[] args){
        roomvolume obj1 = new roomvolume(10, 15, 20);
        int area = obj1.area();
        int vol = obj1.volume();
        System.out.println("AREA = " + area);
        System.out.println("VOLUME = " + vol);
    }
}
