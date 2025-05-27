// Program 2: Simple Encryption in Java with formatted output
import java.io.*;
import java.util.Scanner;

public class SimpleEncryption {
    // Method to encrypt file content using a shift size
    public static String encryptContent(String content, int shiftSize) {
        StringBuilder encryptedContent = new StringBuilder();
        for (char character : content.toCharArray()) {
            if (Character.isLetter(character)) {
                char base = Character.isUpperCase(character) ? 'A' : 'a';
                character = (char) ((character - base + shiftSize) % 26 + base);
            }
            encryptedContent.append(character);
        }
        return encryptedContent.toString();
    }

    public static void encryptFile(String inputFilename, String outputFilename, int shiftSize) {
        try (BufferedReader reader = new BufferedReader(new FileReader(inputFilename));
             BufferedWriter writer = new BufferedWriter(new FileWriter(outputFilename))) {

            String content = reader.readLine();
            System.out.println("Shift size: " + shiftSize);
            System.out.println("Message read from the file: " + content);

            String encryptedContent = encryptContent(content, shiftSize);
            writer.write(encryptedContent);
            
            System.out.println("Encrypted message: " + encryptedContent);
            System.out.println("Content has been encrypted and written to " + outputFilename);
        } catch (IOException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the input filename: ");
        String inputFile = scanner.nextLine();
        System.out.print("Enter the output filename: ");
        String outputFile = scanner.nextLine();
        System.out.print("Enter the shift size: ");
        int shiftSize = scanner.nextInt();

        encryptFile(inputFile, outputFile, shiftSize);
    }
}
