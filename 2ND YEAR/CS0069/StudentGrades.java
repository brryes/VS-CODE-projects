public class StudentGrades {
    public static void main(String[] args) {
        String[][] studentArray = {
            {"Peter", "75", "77"},
            {"Clark", "78", "80"},
            {"Logan", "82", "84"}
        };

        System.out.println("Name\tGrade 1\tGrade 2\tAverage");
        System.out.println("------------------------------------");

        for (int i = 0; i < studentArray.length; i++) {
            String name = studentArray[i][0];  
            int grade1 = Integer.parseInt(studentArray[i][1]);  
            int grade2 = Integer.parseInt(studentArray[i][2]); 
            int average = (grade1 + grade2) / 2;  

            System.out.println(name + "\t" + grade1 + "\t" + grade2 + "\t" + average);
        }
    }
}
