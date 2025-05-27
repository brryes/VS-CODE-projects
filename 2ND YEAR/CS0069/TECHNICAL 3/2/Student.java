public class Student extends Person {
    private double grade;

    // Constructor
    public Student(String name, int age, char gender, double grade) {
        super(name, age, gender);
        this.grade = grade;
    }

    public double getGrade() {
        return grade;
    }

    public void setGrade(double grade) {
        this.grade = grade;
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Grade: " + grade);
    }
}
