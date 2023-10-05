fn main() {
    let n = 5; // Change this to the desired number for which you want the multiplication table.
    println!("Multiplication Table for {}: ", n);
    print_multiplication_table(n, 1);
}

fn print_multiplication_table(n: i32, i: i32) {
    if i <= 10 {
        println!("{} x {} = {}", n, i, n * i);
        print_multiplication_table(n, i + 1);
    }
}
