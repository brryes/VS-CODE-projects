public class FindArray {
    private int[] array;

    public FindArray(int[] array) {
        this.array = array;
    }

    public void displayArrayContents() {
        try {
            if (array == null) {
                throw new NullPointerException("The array is null.");
            }

            for (int i = 0; i <= array.length; i++) { 
                System.out.println("Index " + i + ": " + array[i]);
            }
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Caught an ArrayIndexOutOfBoundsException: Attempted to access an invalid index.");
        } catch (NullPointerException e) {
            System.out.println("Caught a NullPointerException: The array is null.");
        } catch (RuntimeException e) {
            System.out.println("Caught a RuntimeException: " + e.getMessage());
        } finally {
            System.out.println("Iteration completed.");
        }
    }

    public static void main(String[] args) {
        FindArray validArray = new FindArray(new int[]{1, 2, 3, 4, 5});
        validArray.displayArrayContents(); 

        FindArray nullArray = new FindArray(null);
        nullArray.displayArrayContents(); 

        FindArray emptyArray = new FindArray(new int[0]);
        emptyArray.displayArrayContents(); 
    }
}
