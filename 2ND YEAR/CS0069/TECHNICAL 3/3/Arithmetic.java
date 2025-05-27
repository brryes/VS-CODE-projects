public class Arithmetic {

    public int add(int a, int b) {
        return a + b;
    }

    public int add(int a, int b, int c) {
        return a + b + c;
    }

    public int add(int a, int b, int c, int d) {
        return a + b + c + d;
    }

    public int multiply(int a, int b) {
        return a * b;
    }

    public int multiply(int a, int b, int c) {
        return a * b * c;
    }

    public int multiply(int a, int b, int c, int d) {
        return a * b * c * d;
    }

    public int subtract(int a, int b) {
        return a - b;
    }

    public double divide(int a, int b) {
        if (b == 0) {
            throw new ArithmeticException("Cannot divide by zero!");
        }
        return (double) a / b;
    }

    public static void main(String[] args) {
        Arithmetic arithmetic = new Arithmetic();

        System.out.println("add(5, 7): " + arithmetic.add(5, 7));
        System.out.println("add(10, 20, 30, 40): " + arithmetic.add(10, 20, 30, 40));
        System.out.println("multiply(3, 6, 9): " + arithmetic.multiply(3, 6, 9));
        System.out.println("multiply(4, 5): " + arithmetic.multiply(4, 5));
        System.out.println("subtract(15, 9): " + arithmetic.subtract(15, 9));
        System.out.println("divide(18, 3): " + arithmetic.divide(18, 3));
    }
}
