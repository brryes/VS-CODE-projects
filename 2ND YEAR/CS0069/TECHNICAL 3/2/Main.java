public class Main {
    public static void main(String[] args) {
        Student student1 = new Student("Daenerys", 16, 'F', 3.75);
        Student student2 = new Student("Sansa", 15, 'F', 2.50);

        Teacher teacher = new Teacher("Mr. Lannister", 40, 'M', 50000);

        System.out.println("Student 1:");
        student1.display();
        System.out.println();

        System.out.println("Student 2:");
        student2.display();
        System.out.println();

        System.out.println("Teacher:");
        teacher.display();
    }
}
