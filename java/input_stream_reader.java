import java.io.*;

public class input_stream_reader {
    public static void main(String[] args)throws Exception{
        String name;
        // CREATE A InputStreamReader using standard input stream:
        InputStreamReader isr = new InputStreamReader(System.in);

        // CREATE a BufferedReader using InputStreamReader created above:
        BufferedReader stdin = new BufferedReader(isr);

        System.out.println("ENTER YOUR NAME: ");
        name = stdin.readLine();

        System.out.println("YOUR NAME IS: " + name);
    }
}
