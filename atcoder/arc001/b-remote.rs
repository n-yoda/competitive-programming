use std::io;
use std::error::Error;

fn run() -> Result<i32, Box<Error>> {
    let mut a_b_str = String ::new();
    io::stdin().read_line(&mut a_b_str).or(Err("no input"))?;
    let mut split = a_b_str.trim().split_whitespace();
    let a = split.next().ok_or("no a")?.parse::<i32>()?;
    let b = split.next().ok_or("no b")?.parse::<i32>()?;
    let d = (a - b).abs();
    let n10 = d / 10;
    let rem = d % 10;
    if rem <= 3 {
        Ok(n10 + rem)
    } else if rem <= 5 {
        Ok(n10 + 1 + (5 - rem))
    } else if rem <= 7 {
        Ok(n10 + 1 + (rem - 5))
    } else {
        Ok(n10 + 1 + (10 - rem))
    }
}

fn main() {
    match run() {
        Ok(answer) => println!("{}", answer),
        Err(e) => println!("{}", e)
    }
}


