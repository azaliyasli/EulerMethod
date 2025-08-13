# 🖥️ Euler's Method in C++
## ✨ Features
- 🧮 Numerical solution using Euler's method
- 🔢 Step size `h = 0.01`
- 📜 Prints the computed values of `y` for each step

## 📂 Code Explanation
- `function(double y)` → returns the derivative `-y`
- `yn[0] = 1` → sets the initial value
- Loop calculates `y[i+1] = y[i] + h * f(y[i])`

## 🛠 Requirements
- C++ compiler (e.g., g++, clang++)
- Basic knowledge of numerical methods
