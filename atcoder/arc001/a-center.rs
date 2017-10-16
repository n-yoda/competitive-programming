use std::io;
use std::error::Error;

fn run() -> Result<(), Box<Error>> {
    let mut n_str = String::new();
    io::stdin().read_line(&mut n_str).or(Err("no n"))?;
    let n = n_str.trim().parse::<usize>().or(Err("parse error: n"))?;

    let mut count: [i32; 4] = [0; 4];
    let mut cs = String::new();
    io::stdin().read_line(&mut cs).or(Err("no cs"))?;
    for c in cs.as_bytes()[0..n].iter() {
        let i = (c - ('1' as u8)) as usize;
        count[i] += 1
    }
    println!("{} {}",
        count.iter().max().ok_or("no max")?,
        count.iter().min().ok_or("no min")?);
    Ok(())
}

fn main() {
    match run() {
        Ok(()) => (),
        Err(e) => println!("{}", e)
    }
}

