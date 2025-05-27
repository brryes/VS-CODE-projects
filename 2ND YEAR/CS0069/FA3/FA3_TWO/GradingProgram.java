import java.util.Scanner;

class StudentRecord {
    // Instance variables
    private double quiz1;
    private double quiz2;
    private double midterm;
    private double finalExam;
    private double overallNumericScore;
    private char finalLetterGrade;

    public StudentRecord() {
        quiz1 = 0;
        quiz2 = 0;
        midterm = 0;
        finalExam = 0;
        overallNumericScore = 0;
        finalLetterGrade = 'F';
    }

    public void inputScores() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter first quiz score (out of 10): ");
        quiz1 = scanner.nextDouble();
        System.out.print("Enter second quiz score (out of 10): ");
        quiz2 = scanner.nextDouble();
        System.out.print("Enter midterm exam score (out of 100): ");
        midterm = scanner.nextDouble();
        System.out.print("Enter final exam score (out of 100): ");
        finalExam = scanner.nextDouble();
    }

    public void computeOverallNumericScore() {
        double quiz1Percentage = (quiz1 / 10) * 100;
        double quiz2Percentage = (quiz2 / 10) * 100;
        double averageQuizScore = (quiz1Percentage + quiz2Percentage) / 2;

        overallNumericScore = (averageQuizScore * 0.25) + (midterm * 0.25) + (finalExam * 0.5);
    }

    public void computeFinalLetterGrade() {
        if (overallNumericScore >= 90) {
            finalLetterGrade = 'A';
        } else if (overallNumericScore >= 80) {
            finalLetterGrade = 'B';
        } else if (overallNumericScore >= 70) {
            finalLetterGrade = 'C';
        } else if (overallNumericScore >= 60) {
            finalLetterGrade = 'D';
        } else {
            finalLetterGrade = 'F';
        }
    }

    public void computeGrades() {
        computeOverallNumericScore();
        computeFinalLetterGrade();
    }

    public void displayStudentRecord() {
        System.out.println("\nStudent Record:");
        System.out.println("Quiz 1 Score: " + quiz1);
        System.out.println("Quiz 2 Score: " + quiz2);
        System.out.println("Midterm Exam Score: " + midterm);
        System.out.println("Final Exam Score: " + finalExam);
        System.out.printf("Overall Numeric Score: %.2f\n", overallNumericScore);
        System.out.println("Final Letter Grade: " + finalLetterGrade);
    }

    public double getQuiz1() {
        return quiz1;
    }

    public double getQuiz2() {
        return quiz2;
    }

    public double getMidterm() {
        return midterm;
    }

    public double getFinalExam() {
        return finalExam;
    }

    public double getOverallNumericScore() {
        return overallNumericScore;
    }

    public char getFinalLetterGrade() {
        return finalLetterGrade;
    }

    public void setQuiz1(double quiz1) {
        this.quiz1 = quiz1;
    }

    public void setQuiz2(double quiz2) {
        this.quiz2 = quiz2;
    }

    public void setMidterm(double midterm) {
        this.midterm = midterm;
    }

    public void setFinalExam(double finalExam) {
        this.finalExam = finalExam;
    }
}

public class GradingProgram {
    public static void main(String[] args) {
        StudentRecord student = new StudentRecord();
        
        student.inputScores();
        
        student.computeGrades();
        
        student.displayStudentRecord();
    }
}
