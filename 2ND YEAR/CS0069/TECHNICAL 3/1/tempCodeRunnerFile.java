public class Main {
    public static void main(String[] args) {
        Time t1 = new Time(12, 30, 45);
        Time t2 = new Time(10, 45, 30);
        Time t3 = new Time(12, 30, 45);

        TimeComparison comparator = new TimeComparison();

        System.out.println("Comparing t1 and t2:");
        System.out.println("Is t1 greater than t2? " + comparator.isGreater(t1, t2));
        System.out.println("Is t1 less than t2? " + comparator.isLess(t1, t2));
        System.out.println("Is t1 equal to t2? " + comparator.isEqual(t1, t2));

        System.out.println("\nComparing t1 and t3:");
        System.out.println("Is t1 greater than t3? " + comparator.isGreater(t1, t3));
        System.out.println("Is t1 less than t3? " + comparator.isLess(t1, t3));
        System.out.println("Is t1 equal to t3? " + comparator.isEqual(t1, t3));
    }
}
