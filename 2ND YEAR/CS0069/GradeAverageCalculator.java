import java.util.Scanner;

public class GradeAverageCalculator {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        // Input grades
        System.out.print("Enter Preliminary Grade: ");
        double prelimGrade = scanner.nextDouble();

        System.out.print("Enter Midterm Grade: ");
        double midtermGrade = scanner.nextDouble();

        System.out.print("Enter Final Grade: ");
        double finalGrade = scanner.nextDouble();

        // Define percentage weights
        double prelimWeight = 0.30;
        double midtermWeight = 0.30;
        double finalWeight = 0.40;

        // Calculate the weighted average
        double average = (prelimGrade * prelimWeight) + (midtermGrade * midtermWeight) + (finalGrade * finalWeight);

        // Output the computed average
        System.out.printf("The weighted average is: %.2f%n", average);
    }
}
