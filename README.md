Higher-Order Methods and Richardson Extrapolation for Numerical Differentiation : 

This repository contains our **group assignment on numerical differentiation techniques**, exploring how different methods compare in terms of **accuracy and convergence**.
We implemented and compared various numerical differentiation methods to approximate derivatives of smooth functions.  
The main goal was to understand how **higher-order methods improve accuracy** and how **Richardson extrapolation reduces errors**.

🔗 **Repository URL:**  
https://github.com/rahibraihan/cygnus.git

---

## 📌 What We Did

## Implemented second-order central difference method (O(h²))
#### Formula:
$$
f'(x) \approx \frac{f(x + h) - f(x - h)}{2h}
$$



            Error: O(h²)

## Implemented fourth-order central difference method (O(h⁴))
#### Formula:
$$
f'(x) \approx \frac{-f(x + 2h) + 8f(x + h) - 8f(x - h) + f(x - 2h)}{12h}
$$
   
            Error: O(h⁴)
## Applied Richardson extrapolation to improve accuracy
#### Formula:
$$
D_R = \frac{4D(h/2) - D(h)}{3}
$$
   
9. Analyzed errors, stability, and convergence behavior 
11. Generated plots and tables to visualize results

## 🧪 Test Function

We used the following test function:

$$
f(x) = \sin(x)
$$

Exact derivative:

$$
f'(x) = \cos(x)
$$

-> Evaluation point: **x = 1.0**
-> Step sizes: **h = 0.1, 0.05, 0.025, **

---

## ⚙️ System Requirements

-> **Compiler:** C++
-> **Visualization Tool:** Gnuplot

---

## 📁 Repository Structure

1. **CYGNUS Report.pdf**  
   (Group assignment report – PDF)

2. **CYGNUS Report.zip**  
   (Zipped report and related files)

3. **Cygnus_cpp**  
   (C++ source code)

4. **Cygnus.exe**  
   (Compiled executable)

5. **LICENSE**  
   (License information)

6. **README.md**  
   (Project documentation)

7. **error_data.txt**  
   (Numerical error data)

8. **error_plot.png**  
   (Error convergence plot)

9. **plot.gp**  
   (Gnuplot script)



---

## 💡 Key Insights

-> Higher-order methods significantly reduce truncation error  
-> Fourth-order schemes outperform second-order schemes  
-> Richardson extrapolation improves accuracy  
-> Choosing an appropriate step size is critical for numerical stability  


# cygnus
Note: Choosing an appropriate step size is important for balancing accuracy and computational cost.
Tip: You can modify the test function or step sizes in the C++ code to experiment with different scenarios.


The error_plot.png shows how the numerical error decreases as the step size is reduced, demonstrating faster convergence for higher-order methods.
