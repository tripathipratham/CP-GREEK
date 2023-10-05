fn main() {
    let decimal_number = 42; // Change this to the decimal number you want to convert to binary.

    let number_of_bits = calculate_number_of_bits(decimal_number);

    println!("Decimal Number: {}", decimal_number);
    println!("Number of Bits Required: {}", number_of_bits);
}

fn calculate_number_of_bits(mut decimal_number: i32) -> i32 {
    if decimal_number == 0 {
        return 1; // Special case: 0 can be represented with a single bit.
    }

    let mut number_of_bits = 0;

    while decimal_number != 0 {
        decimal_number >>= 1; // Right shift by 1 bit.
        number_of_bits += 1;
    }

    number_of_bits
}
