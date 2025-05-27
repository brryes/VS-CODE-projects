public class GradeDistribution {
    private int numA;
    private int numB;
    private int numC;
    private int numD;
    private int numF;

    public GradeDistribution() {
        numA = 0;
        numB = 0;
        numC = 0;
        numD = 0;
        numF = 0;
    }
    public void setNumA(int numA) {
        this.numA = numA;
    }

    public void setNumB(int numB) {
        this.numB = numB;
    }

    public void setNumC(int numC) {
        this.numC = numC;
    }

    public void setNumD(int numD) {
        this.numD = numD;
    }

    public void setNumF(int numF) {
        this.numF = numF;
    }

    public int getNumA() {
        return numA;
    }

    public int getNumB() {
        return numB;
    }

    public int getNumC() {
        return numC;
    }

    public int getNumD() {
        return numD;
    }

    public int getNumF() {
        return numF;
    }

    public int getTotalGrades() {
        return numA + numB + numC + numD + numF;
    }

    public int getPercentage(int numGrades) {
        int totalGrades = getTotalGrades();
        if (totalGrades == 0) {
            return 0;
        }
        return (int) Math.round((double) numGrades / totalGrades * 100);
    }

    public String generateGraphLine(int numGrades, char grade) {
        int percentage = getPercentage(numGrades);
        int numAsterisks = (percentage * 50) / 100; 
        StringBuilder line = new StringBuilder();
        
        for (int i = 0; i < numAsterisks; i++) {
            line.append("*");
        }

        line.append(" ").append(grade);
        
        return line.toString();
    }

    public void drawGraph() {
        System.out.println(" 0 10 20 30 40 50 60 70 80 90 100");
        System.out.println("***************************************************");

        System.out.println(generateGraphLine(numA, 'A'));
        System.out.println(generateGraphLine(numB, 'B'));
        System.out.println(generateGraphLine(numC, 'C'));
        System.out.println(generateGraphLine(numD, 'D'));
        System.out.println(generateGraphLine(numF, 'F'));
    }

    public static void main(String[] args) {
        GradeDistribution distribution = new GradeDistribution();

        distribution.setNumA(1);
        distribution.setNumB(4);
        distribution.setNumC(6);
        distribution.setNumD(2);
        distribution.setNumF(1);

        distribution.drawGraph();
    }
}
