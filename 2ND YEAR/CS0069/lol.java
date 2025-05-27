import java.util.Scanner;


public class lol {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number: ");
        double numA = scanner.nextDouble();

        System.out.print("Enter number: ");
        double numB = scanner.nextDouble();

        double sum = numA + numB;
        double difference = numA - numB;
        double quotient = (numB != 0)? numA/numB: Double.NaN;
        double Product = numA * numB;

        System.out.println("Sum: " + sum);
        System.out.println("Difference: " + difference);
        System.out.println("Quotient: " + quotient);
        System.out.println("Product: " + product);


scanner.close();


    
    } 
}
