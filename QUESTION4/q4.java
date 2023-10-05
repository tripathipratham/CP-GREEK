public class NumberOfBitsForDecimal {
    public static void main(String[] args) {
        int decimalNumber = 42; // Change this to the decimal number you want to convert to binary.

        int numberOfBits = calculateNumberOfBits(decimalNumber);

        System.out.println("Decimal Number: " + decimalNumber);
        System.out.println("Number of Bits Required: " + numberOfBits);
    }

    public static int calculateNumberOfBits(int decimalNumber) {
        if (decimalNumber == 0) {
            return 1; // Special case: 0 can be represented with a single bit.
        }

        int numberOfBits = 0;
        
        while (decimalNumber > 0) {
            decimalNumber >>= 1; // Right shift by 1 bit.
            numberOfBits++;
        }

        return numberOfBits;
    }
}
