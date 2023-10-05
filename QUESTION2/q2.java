public class LazySequence {
    public static void main(String[] args) {
        int n = 5; // Change this to the desired value of n
        generateLazySequence(n);
    }

    public static void generateLazySequence(int n) {
        if (n < 0) {
            return;
        }

        // Print the decreasing part of the sequence
        System.out.print(n + " ");
        generateLazySequence(n - 1);

        // Print the increasing part of the sequence
        if (n > 0) {
            System.out.print(n + " ");
        }
    }
}
