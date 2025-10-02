# 2.2 Stochastic Calculus

## Overview

This subtopic covers the mathematical foundation for modeling continuous-time financial processes, including Brownian motion, Ito's lemma, and stochastic differential equations. These tools are essential for derivatives pricing and risk management.

## Learning Objectives

By the end of this subtopic, you should be able to:

- **Understand Brownian motion** and its properties for modeling asset prices
- **Apply Ito's lemma** to derive stochastic differential equations
- **Solve SDEs** for asset price dynamics and volatility models
- **Implement numerical methods** for simulating stochastic processes

## Key Concepts

### Brownian Motion
- **Standard Brownian Motion**: $W_t$ with $W_0 = 0$, independent increments
- **Properties**: $W_t \sim N(0,t)$, $E[W_t] = 0$, $Var[W_t] = t$
- **Geometric Brownian Motion**: $dS_t = \mu S_t dt + \sigma S_t dW_t$
- **Martingale Property**: $E[W_t | \mathcal{F}_s] = W_s$ for $s < t$

### Ito's Lemma
- **One-dimensional**: $df = \frac{\partial f}{\partial t}dt + \frac{\partial f}{\partial x}dx + \frac{1}{2}\frac{\partial^2 f}{\partial x^2}(dx)^2$
- **Multi-dimensional**: $df = \frac{\partial f}{\partial t}dt + \sum_i \frac{\partial f}{\partial x_i}dx_i + \frac{1}{2}\sum_{i,j} \frac{\partial^2 f}{\partial x_i \partial x_j}dx_i dx_j$
- **Applications**: Deriving SDEs for functions of stochastic processes

### Stochastic Differential Equations
- **General Form**: $dX_t = \mu(X_t,t)dt + \sigma(X_t,t)dW_t$
- **Solution Methods**: Analytical solutions, numerical approximation
- **Existence and Uniqueness**: Conditions for well-defined solutions
- **Feynman-Kac Formula**: Connection to partial differential equations

## Mathematical Foundations

### Key Formulas
- **Ito's Lemma**: $df = \frac{\partial f}{\partial t}dt + \frac{\partial f}{\partial S}dS + \frac{1}{2}\frac{\partial^2 f}{\partial S^2}(dS)^2$
- **Geometric Brownian Motion**: $S_t = S_0 \exp\left((\mu - \frac{1}{2}\sigma^2)t + \sigma W_t\right)$
- **Ornstein-Uhlenbeck Process**: $dX_t = \theta(\mu - X_t)dt + \sigma dW_t$
- **CIR Process**: $dr_t = \kappa(\theta - r_t)dt + \sigma\sqrt{r_t}dW_t$

### Numerical Methods
- **Euler-Maruyama**: $X_{t+\Delta t} = X_t + \mu(X_t,t)\Delta t + \sigma(X_t,t)\sqrt{\Delta t}Z$
- **Milstein Scheme**: Higher-order approximation for SDEs
- **Monte Carlo**: Simulating multiple paths for pricing

## Industry Relevance

This knowledge is essential for:
- **Derivatives pricing** - Black-Scholes model and extensions
- **Risk management** - Modeling portfolio dynamics and risk factors
- **Interest rate modeling** - Vasicek, Hull-White, and other models
- **Volatility modeling** - Stochastic volatility and jump processes

## Skills Developed

- **Mathematical rigor** - Understanding continuous-time stochastic processes
- **Model implementation** - Coding SDEs and numerical methods
- **Risk analysis** - Quantifying uncertainty in financial models
- **Problem solving** - Applying stochastic calculus to real-world problems

## Prerequisites

- Strong foundation in calculus and probability (from 1.2, 1.3)
- Programming skills (from 1.4)
- Understanding of financial markets (from 1.1)

## Next Steps

After completing this subtopic:
- **2.3 Derivatives Pricing Models** - Application to options pricing
- **2.4 Interest Rate & Credit Models** - Specialized SDE applications
- **6.1 Monte Carlo Simulation** - Numerical implementation

## Resources

- Stochastic calculus textbooks
- Financial mathematics papers
- Numerical methods resources
- Quantitative finance libraries (QuantLib)

## Assessment

- Derive SDEs using Ito's lemma
- Implement numerical solutions to SDEs
- Apply stochastic calculus to pricing problems
- Understand the mathematical foundations of derivatives pricing
