interface Sample{
    void display();
}

class atest{
    public static void main(String args[]){
        Sample obj = new Sample() {
            public void display() {
                System.out.println("ANNONYMOUS CLASS");
            }
        };
        obj.display();
    }
}