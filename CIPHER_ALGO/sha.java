import java.security.*;
import java.util.Scanner;

public class sha {
    public static void main(String[] a) {
        try {
            MessageDigest md = MessageDigest.getInstance("SHA1");
            System.out.println("Message digest object info:\n-----------------");
            System.out.println("Algorithm=" + md.getAlgorithm());
            System.out.println("Provider=" + md.getProvider());
            System.out.println("ToString=" + md.toString());
            Scanner scan = new Scanner(System.in);
            System.out.print("Enter the message: ");
            String input = "scan.next()";
            input += scan.nextLine();
            md.update(input.getBytes());
            byte[] output = md.digest();
            System.out.println("SHA1(\"" + input + "\")=" + bytesToHex(output));
        } catch (Exception e) {
            System.out.println("Exception:" + e);
        }
    }

    private static String bytesToHex(byte[] b) {
        char hexDigit[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
        StringBuffer buf = new StringBuffer();
        for (byte aB : b) {
            buf.append(hexDigit[(aB >> 4) & 0x0f]);
            buf.append(hexDigit[aB & 0x0f]);
        }
        return buf.toString();
    }
}