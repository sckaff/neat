# NEAT visualizer on Rust

Test it on Knnapsack, Luna Invader, and Snake!

## Requirements

- **Rust** and **Cargo** installed.
- Dependencies listed in `Cargo.toml` are automatically handled by Cargo.

## Getting Started

Follow the steps below to run the application locally.

### 1. Install Rust and Cargo

If Rust and Cargo are not already installed, you can install them using the following command:

```bash
curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh
```

For more information, visit the official [Rust installation guide](https://www.rust-lang.org/tools/install).

### 2. Clone the Repository

Clone the project repository from GitHub (or wherever your project is hosted):

```bash
git clone https://github.com/sckaff/logos.git
cd logos
```

### 3. Build the project

To build the project in development mode:

```bash
cargo build
```

If you want to build in release mode (optimized for performance), use:

```bash
cargo build --release
```

### 4. Run the Project

To run the application in development mode, execute the following command:

```bash
cargo run
```

Alternatively, to run in release mode (faster performance, but slower compilation):

```bash
cargo run --release
```

### 5. Usage

After running the project, the application will open with a graphical user interface (GUI). You'll be able to:

- **Visualize the Neural Network**: Open the "Neural Network Visualizer" window to see the neural network's structure (visualization logic placeholder for now).
- **Adjust Parameters**: Open the "Parameter Adjuster" window to modify neural network and evolutionary computation parameters like mutation rate and learning rate.
- **Train the Neural Network**: Use the "Train" button in the Parameter Adjuster window to start training.

## Project Structure

The project is structured as follows:

```bash
logos/
├── src/
│   ├── main.rs                      
│   ├── windows/                     
│   │   ├── network_visualizer.rs    
│   │   └── parameter_adjuster.rs    
│   └── neuroevolution/              
│       ├── mod.rs                   
│       ├── neural_network.rs        
│       └── evolutionary.rs          
├── Cargo.toml                       
```

## Contributing

Contributions are welcome! Feel free to open an issue or submit a pull request with your improvements or ideas.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.
