class recursion {
    int factorial(int n){
        if(n == 1 || n == 0 ){
            return 1;
        }
        return n*factorial(n-1);
    }

    public static void main(String args[]){
        recursion r = new recursion();
        int result = r.factorial(3);
        System.out.println("FACTORIAL OF 3 IS: " + result);
    }
}
