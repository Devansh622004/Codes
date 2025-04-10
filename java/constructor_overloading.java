class area{
    area(int r){
        System.out.println("AREA OF CIRCLE IS: " + 3.14 * r * r);
    }
    area(int l, int b){
        System.out.println("AREA OF RECTANGLE IS: " + l*b);
    }
    public static void main(String[] args){
        area a = new area(2);
        area a2 = new area(2, 5);
    }
}

