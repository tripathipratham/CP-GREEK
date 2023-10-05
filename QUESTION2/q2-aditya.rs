fn main() {
    let n = 5; // Change this to the desired value of n
    generate_lazy_sequence(n, n);
}

fn generate_lazy_sequence(original_n: i32, n: i32) {
    if n >= -original_n {
        print!("{} ", n.abs());
        generate_lazy_sequence(original_n, n - 1);
        if n != original_n {
            print!("{} ", n.abs());
        }
    }
}
