# 1.3 Linear Algebra & Calculus

## Overview

This subtopic provides the advanced mathematical tools essential for quantitative finance, including linear algebra for factor analysis and optimization, and calculus for continuous-time models and derivatives pricing.

## Learning Objectives

By the end of this subtopic, you should be able to:

- **Apply linear algebra** to portfolio optimization, factor analysis, and risk decomposition
- **Use calculus** for derivatives pricing, sensitivity analysis, and optimization
- **Implement numerical methods** for solving financial problems computationally
- **Understand mathematical foundations** of advanced quantitative models

## Key Concepts

### Linear Algebra
- **Matrices and Vectors**: Operations, properties, and applications
- **Eigenvalues and Eigenvectors**: Principal component analysis, factor models
- **Matrix Decompositions**: SVD, Cholesky, QR decomposition
- **Linear Systems**: Solving systems of equations, least squares

### Calculus
- **Multivariable Calculus**: Partial derivatives, gradients, Hessians
- **Optimization**: Lagrange multipliers, constrained optimization
- **Integration**: Multiple integrals, change of variables
- **Differential Equations**: Ordinary and partial differential equations

### Financial Applications
- **Portfolio Optimization**: Quadratic programming, risk budgeting
- **Factor Models**: Principal component analysis, factor decomposition
- **Derivatives Pricing**: Greeks calculation, sensitivity analysis
- **Risk Management**: VaR calculation, stress testing

## Mathematical Foundations

### Key Formulas
- **Gradient**: $\nabla f = \left(\frac{\partial f}{\partial x_1}, \frac{\partial f}{\partial x_2}, \ldots, \frac{\partial f}{\partial x_n}\right)$
- **Hessian Matrix**: $H_{ij} = \frac{\partial^2 f}{\partial x_i \partial x_j}$
- **Eigenvalue Equation**: $A\mathbf{v} = \lambda\mathbf{v}$
- **Lagrange Multipliers**: $\nabla f = \lambda \nabla g$ (subject to constraint $g = 0$)

### Optimization
- **Portfolio Optimization**: $\min \frac{1}{2}\mathbf{w}^T\Sigma\mathbf{w}$ subject to $\mathbf{w}^T\mathbf{1} = 1$
- **Risk Parity**: $\min \sum_{i=1}^n \left(\frac{w_i}{\sigma_i} - \frac{1}{n}\right)^2$
- **Black-Litterman**: $\mathbf{w} = \frac{1}{\lambda}\Sigma^{-1}\boldsymbol{\mu}$

## Industry Relevance

This knowledge is critical for:
- **Portfolio management** - Optimization and risk budgeting
- **Quantitative research** - Factor model development and analysis
- **Risk management** - VaR calculation and stress testing
- **Derivatives trading** - Greeks calculation and hedging

## Skills Developed

- **Mathematical modeling** - Translating financial problems into mathematical frameworks
- **Computational methods** - Implementing numerical algorithms efficiently
- **Optimization** - Solving complex portfolio and risk management problems
- **Factor analysis** - Understanding and implementing factor models

## Prerequisites

- Strong foundation in calculus and linear algebra
- Basic programming skills (Python/NumPy recommended)
- Understanding of financial markets (from 1.1)

## Next Steps

After completing this subtopic:
- **1.4 Programming Foundations** - Implementation skills
- **2.2 Stochastic Calculus** - Advanced mathematical tools
- **4.1 Modern Portfolio Theory** - Application of optimization

## Resources

- Advanced mathematics textbooks
- Numerical analysis resources
- Optimization libraries (SciPy, CVXPY)
- Financial mathematics papers

## Assessment

- Solve optimization problems in finance
- Implement factor analysis and PCA
- Calculate derivatives and sensitivities
- Apply numerical methods to financial problems
