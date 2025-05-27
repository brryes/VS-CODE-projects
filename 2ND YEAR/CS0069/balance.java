import java.util.Scanner;

public class balance {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        boolean continueCalculating = true;

        while (continueCalculating) {
            System.out.print("Enter your bank account balance: ");
            double balance = scanner.nextDouble();

            System.out.print("Enter the interest rate (as a percentage): ");
            double interestRate = scanner.nextDouble() / 100; 
            double annualBalance = balance;
            for (int year = 1; year <= 10; year++) {
                annualBalance += annualBalance * interestRate; 
            }
            System.out.printf("Balance after 10 years (annually compounded): %.2f%n", annualBalance);

            double monthlyBalance = balance;
            for (int month = 1; month <= 10 * 12; month++) {
                monthlyBalance += monthlyBalance * (interestRate / 12); 
            }
            System.out.printf("Balance after 10 years (monthly compounded): %.2f%n", monthlyBalance);

            double dailyBalance = balance;
            for (int day = 1; day <= 10 * 365; day++) {
                dailyBalance += dailyBalance * (interestRate / 365); 
            }
            System.out.printf("Balance after 10 years (daily compounded): %.2f%n", dailyBalance);

            System.out.print("Do you want to calculate again? (yes/no): ");
            String response = scanner.next();
            continueCalculating = response.equalsIgnoreCase("yes");
        }

        scanner.close();
        System.out.println("Thank you for using the bank account interest calculator!");
    }
}

        