import java.awt.Point;
import java.util.Scanner;
class playfair {
  private static char[][] charTable;
  private static Point[] positions;
  
private static String prepareText(String s) {
  s = s.toUpperCase().replaceAll("[^A-Z]", "");//Using regex to remove non-alphabetic characters
  return s.replace("J", "I");
  }
 
private static void createTbl(String key) {
  charTable = new char[5][5];
  positions = new Point[26];//Point array stores (x,y) value
  String s = prepareText(key + "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
  int len = s.length();
  for (int i = 0, k = 0; i < len; i++) {
  char c = s.charAt(i);
  if (positions[c - 'A'] == null) {//Check if characters are in key square matrix
  charTable[k / 5][k % 5] = c;
  positions[c - 'A'] = new Point(k / 5, k % 5);
  k++;
  }
  }
  System.out.println("The key square");
  for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        System.out.print(charTable[i][j] +" ");
      }
      System.out.println();
      }
  }
 
private static String codec(StringBuilder txt, int dir) {
  int len = txt.length();
  for (int i = 0; i < len; i += 2) {
  char a = txt.charAt(i);
  char b = txt.charAt(i + 1);
  int row1 = positions[a - 'A'].x;
  int row2 = positions[b - 'A'].x;
  int col1 = positions[a - 'A'].y;
  int col2 = positions[b - 'A'].y;
  if (row1 == row2) {//Digrams in same row
  col1 = (col1 + dir) % 5;
  col2 = (col2 + dir) % 5;
  } 
else if (col1 == col2) {//Digrams in same column
  row1 = (row1 + dir) % 5;
  row2 = (row2 + dir) % 5;
  } 
else {//Digrams neither in same row or column
  int tmp = col1;
  col1 = col2;
  col2 = tmp;
  }
  txt.setCharAt(i, charTable[row1][col1]);
  txt.setCharAt(i + 1, charTable[row2][col2]);
  }
  return txt.toString();
  }
 
private static String encode(String s) {
  StringBuilder sb = new StringBuilder(s);
  for (int i = 0; i < sb.length(); i += 2) {
  if (i == sb.length() - 1) {
  sb.append(sb.length() % 2 == 1 ? 'Z' : "");
  } 
else if (sb.charAt(i) == sb.charAt(i + 1)) {
  sb.insert(i + 1, 'Z');
  }
  }
  return codec(sb, 1);
  }
 
private static String decode(String s) {
  return codec(new StringBuilder(s), 4);
  }
 
public static void main(String[] args) {
  Scanner scan = new Scanner(System.in);     
  System.out.println("Enter the key");
  String key = scan.next();
  System.out.println("Enter the plain text");
  String txt = scan.next();
  createTbl(key);
  String enc = encode(prepareText(txt));
  System.out.println("Simulating Playfair Cipher\n----------------------");
  System.out.println("Input Message : " + txt);
  System.out.println("Encrypted Message : " + enc);
  System.out.println("Decrypted Message : " + decode(enc));
  scan.close();
  }
}