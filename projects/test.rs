use std::io;

fn main(){
    // TODO: input
    let mut x: String = "my string".to_string();
    std::io::stdin().read_line(&mut x);
}

fn pointers(x: i32) {
    let mut raw_x = x;
    let mut ptr_x = &raw_x;
    println!("{}", &raw_x);
    raw_x = raw_x + 1;
    println!("{}", &raw_x);
}