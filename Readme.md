# neural_nets_in_C

> A neural network built from first principles — in pure C. No PyTorch. No TensorFlow. No abstractions.

[![C](https://img.shields.io/badge/Language-C-blue)](https://en.wikipedia.org/wiki/C_(programming_language))
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

---

## Why?

Most developers use ML frameworks as black boxes. This project is about understanding what actually happens inside: how weights are initialized, how gradients flow backward through layers, and how a network actually learns — all implemented by hand in C.

If you've ever wanted to understand deep learning at the bare-metal level, this repo is for you.

---

## What's Implemented

- **Feedforward Neural Network** — fully connected layers
- **Forward Pass** — matrix multiplication + activation functions
- **Backpropagation** — manually computed gradients
- **Training Loop** — weight updates via gradient descent
- **Build Script** — `build.sh` compiles everything with GCC

---

## Getting Started

### Requirements

- GCC (any modern version)
- Linux / macOS / WSL

### Build & Run

```bash
git clone https://github.com/ashutoshsharmadev/neural_nets_in_C.git
cd neural_nets_in_C
chmod +x build.sh
./build.sh
./nn          # run the network
```

---

## Project Structure

```
neural_nets_in_C/
├── main.c       # Network definition, training loop, inference
├── build.sh     # GCC build script
└── Readme.md    # This file
```

---

## Key Concepts Covered

| Concept | Where |
|---|---|
| Weight initialization | `main.c` |
| Matrix multiplication | Forward pass |
| Sigmoid / ReLU activation | Forward pass |
| Chain rule / backprop | Backward pass |
| Gradient descent update | Training loop |

---

## What I Learned

- How to implement matrix math without BLAS or numpy
- How backpropagation works at the calculus level
- Memory management for dynamically sized layers in C
- The performance characteristics of a naive vs optimized forward pass

---

## Roadmap

- [ ] Support configurable layer sizes via CLI args
- [ ] Add ReLU and tanh alongside sigmoid
- [ ] Train and evaluate on MNIST (CSV format)
- [ ] Add momentum and Adam optimizer

---

## License

MIT
