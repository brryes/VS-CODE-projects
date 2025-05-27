import java.io.*;

public class IntegerIO {
    public static void writeIntegerToFile(String filename, int number) {
        try (FileOutputStream fileOut = new FileOutputStream(filename);
             ObjectOutputStream out = new ObjectOutputStream(fileOut)) {
            out.writeObject(number);
            System.out.println("Integer " + number + " has been written to " + filename);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static int readIntegerFromFile(String filename) {
        int number = 0;
        try (FileInputStream fileIn = new FileInputStream(filename);
             ObjectInputStream in = new ObjectInputStream(fileIn)) {
            number = (int) in.readObject();
        } catch (IOException | ClassNotFoundException e) {
            e.printStackTrace();
        }
        return number;
    }

    public static void main(String[] args) {
        String filename = "integer_data.bin";
        writeIntegerToFile(filename, 42);
        int readValue = readIntegerFromFile(filename);
        System.out.println("Integer read from " + filename + ": " + readValue);
    }
}


