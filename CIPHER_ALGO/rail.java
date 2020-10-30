import java.util.Scanner;

class rail {
    String encode(String msg) {
        int len = msg.length();
        int k = 0, i = 0;
        String enc = "";
        while (k != len) {
            enc += msg.charAt(i);
            i += 2;
            if (i >= len) {
                i = 1;
            }
            k++;
        }
        return enc;
    }

    String decode(String encmsg) {
        int len = encmsg.length();
        int k = 0, i = 0;
        int j = (int) Math.ceil((double) len / 2);
        String dec = "";
        while (k != len) {
            if (k % 2 == 0) {// first half of encrypted message
                dec += encmsg.charAt(i);
                i++;
            } else {// last half of encrypted message
                dec += encmsg.charAt(j);
                j++;
            }
            k++;
        }
        return dec;
    }
}

class Main {
    public static void main(String[] args) {
        rail rf = new rail();
        String msg, enc, dec;
        Scanner scan = new Scanner(System.in);
        System.out.println("Simulating Railfence Cipher\n-------------------------");
        System.out.print("Enter the plain text: ");
        msg = scan.next();
        msg += scan.nextLine();
        enc = rf.encode(msg);
        dec = rf.decode(enc);
        System.out.println("Encrypted Message : " + enc);
        System.out.printf("Decrypted Message : " + dec +"\n");
        scan.close();
    }
}