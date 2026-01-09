\documentclass[12pt]{article}
\usepackage{amsmath, amssymb}
\usepackage{booktabs}
\usepackage{graphicx}
\usepackage{float}
\usepackage{geometry}
\usepackage{graphicx}
\usepackage{float}
\geometry{margin=1in}


\title{\textbf{Higher-Order Methods \& Richardson Extrapolation}}
\author{
\textbf{ Group Name : Cygnus}\\
\textbf{Course Name:} Numerical Methods \\
\textbf{Course Code:} CSE 261.4
}
\date{13 January 2026 }

\begin{document}
\maketitle

\section{Objective}
The objective of this experiment is to:
\begin{itemize}
    \item Implement second-order $\mathcal{O}(h^2)$ and fourth-order $\mathcal{O}(h^4)$ finite difference formulas for numerical differentiation.
    \item Compare their convergence behavior.
    \item Demonstrate the accuracy improvement obtained using higher-order methods.
\end{itemize}

\section{Problem Description}
We approximate the first derivative of the function
\[
f(x) = \sin(x)
\]
at the point $x = 1.0$.
The exact derivative is
\[
f'(x) = \cos(x)
\]
which is used to compute the numerical error.

\section{Numerical Methods}

\subsection{$\mathcal{O}(h^2)$ Central Difference}
\[
f'(x) \approx \frac{f(x+h) - f(x-h)}{2h}
\]

\subsection{$\mathcal{O}(h^4)$ Central Difference}
\[
f'(x) \approx 
\frac{-f(x+2h) + 8f(x+h) - 8f(x-h) + f(x-2h)}{12h}
\]

\section{Implementation}
The numerical methods were implemented in C using the \texttt{math.h} library.  
\begin{figure}[H]
\centering
\includegraphics[width=0.5\linewidth]{cygnus.png}
\caption{Derivative O(h^2) and  O(h^4)}
\label{fig:placeholder}
\end{figure}


The step sizes used were:
\[
h = \{0.4,\; 0.2,\; 0.1,\; 0.05,\; 0.025\}
\]

\section{Results}

The exact derivative at $x=1$ is:
\[
f'(1) = \cos(1)
\]

Table~\ref{tab:errors} shows the absolute errors for both methods.

\begin{table}[H]
\centering
\caption{Error comparison for $\mathcal{O}(h^2)$ and $\mathcal{O}(h^4)$ methods}
\label{tab:errors}
\begin{tabular}{ccc}
\toprule
$h$ & $\lvert D_2 - f'(x) \rvert$ & $\lvert D_4 - f'(x) \rvert$ \\
\midrule
0.400 & 1.429e-02 & 4.524e-04 \\
0.200 & 3.595e-03 & 2.868e-05 \\
0.100 & 9.001e-04 & 1.799e-06 \\
0.050 & 2.251e-04 & 1.125e-07 \\
0.025 & 5.628e-05 & 7.035e-09 \\
\bottomrule
\end{tabular}
\end{table}

\section{Convergence Comparison}
From the numerical results, it is observed that:
\begin{itemize}
    \item The $\mathcal{O}(h^2)$ method shows quadratic convergence, with error decreasing proportionally to $h^2$.
    \item The $\mathcal{O}(h^4)$ method converges significantly faster, with error decreasing proportional to $h^4$.
    \item For all step sizes, the $\mathcal{O}(h^4)$ method produces much smaller errors than the $\mathcal{O}(h^2)$ method.
\end{itemize}

\section{Richardson Extrapolation}
Richardson extrapolation can be applied to the $\mathcal{O}(h^2)$ method to eliminate the leading error term:
\[
D_{\text{Rich}} = \frac{4D(h/2) - D(h)}{3}
\]
This improves the accuracy to $\mathcal{O}(h^4)$, demonstrating how extrapolation can systematically increase the order of convergence.

\section{Error Decay Plot}
A log--log plot of error versus step size $h$ would show:
\begin{itemize}
    \item A slope of approximately $2$ for the $\mathcal{O}(h^2)$ method.
    \item A slope of approximately $4$ for the $\mathcal{O}(h^4)$ method.
\end{itemize}

\section{Conclusion}
Higher-order finite difference methods provide substantially improved accuracy with minimal additional computational cost. The fourth-order scheme clearly outperforms the second-order scheme, and Richardson extrapolation offers a systematic way to further enhance numerical accuracy.

\end{document}
