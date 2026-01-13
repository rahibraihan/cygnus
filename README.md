Higher-Order Methods and Richardson Extrapolation for Numerical Differentiation : 

This repository contains our **group assignment on numerical differentiation techniques**, exploring how different methods compare in terms of **accuracy and convergence**.

We implemented and compared various numerical differentiation methods to approximate derivatives of smooth functions.  
The main goal was to understand how **higher-order methods improve accuracy** and how **Richardson extrapolation reduces errors**.

🔗 **Repository URL:**  
https://github.com/rahibraihan/cygnus.git

---

## 📌 What We Did

### 1️⃣ Second-Order Central Difference Method (O(h²))

**Formula:**
\[
f'(x) \approx \frac{f(x+h) - f(x-h)}{2h}
\]

- Error: **O(h²)**

---

### 2️⃣ Fourth-Order Central Difference Method (O(h⁴))

**Formula:**
\[
f'(x) \approx \frac{-f(x+2h) + 8f(x+h) - 8f(x-h) + f(x-2h)}{12h}
\]

- Error: **O(h⁴)**

---

### 3️⃣ Richardson Extrapolation

**Formula:**
\[
D_R = \frac{4D(h/2) - D(h)}{3}
\]

- Improves accuracy without increasing computational complexity

---

### 4️⃣ Additional Analysis
- Analyzed **errors**, **stability**, and **convergence behavior**
- Generated **plots and tables** to visualize numerical results

---

## 🧪 Test Function

We used the following test function:

\[
f(x) = \sin(x)
\]

Exact derivative:

\[
f'(x) = \cos(x)
\]

- Evaluation point: **x = 1.0**
- Step sizes: **h = 0.1, 0.05, 0.025, ...**

---

## ⚙️ System Requirements

- **Compiler:** C++
- **Visualization Tool:** Gnuplot

---

## 📁 Repository Structure
├── CYGNUS Report.pdf # Group assignment report (PDF)
├── CYGNUS Report.zip # Zipped report and related files
├── Cygnus_cpp # C++ source code
├── Cygnus.exe # Compiled executable
├── LICENSE # License information
├── README.md # Project documentation
├── error_data.txt # Numerical error data
├── error_plot.png # Error convergence plot
└── plot.gp # Gnuplot script



---

## 💡 Key Insights

- Higher-order methods significantly reduce truncation error  
- Fourth-order schemes outperform second-order schemes  
- Richardson extrapolation improves accuracy  
- Choosing an appropriate step size is critical for numerical stability  

