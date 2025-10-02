# 1.2 Probability & Statistics

## Overview

This subtopic establishes the mathematical foundation for quantitative finance through probability theory and statistical methods. These tools are essential for modeling financial returns, estimating risk, and developing trading strategies.

## Learning Objectives

By the end of this subtopic, you should be able to:

- **Apply probability distributions** to model financial returns and risk factors
- **Conduct statistical inference** including hypothesis testing and confidence intervals
- **Implement Monte Carlo simulations** for risk assessment and option pricing
- **Analyze financial data** using appropriate statistical techniques

## Key Concepts

### Probability Theory
- **Random Variables**: Discrete and continuous distributions
- **Common Distributions**: Normal, log-normal, Student's t, chi-square, F-distribution
- **Multivariate Distributions**: Joint distributions, correlation, copulas
- **Conditional Probability**: Bayes' theorem, conditional expectations

### Statistical Methods
- **Descriptive Statistics**: Mean, variance, skewness, kurtosis, quantiles
- **Inference**: Point estimation, interval estimation, hypothesis testing
- **Regression Analysis**: Linear regression, multiple regression, diagnostic tests
- **Time Series**: Autocorrelation, stationarity, trend analysis

### Financial Applications
- **Return Modeling**: Log returns, geometric Brownian motion, jump processes
- **Risk Metrics**: Value at Risk (VaR), Expected Shortfall, volatility estimation
- **Portfolio Theory**: Mean-variance optimization, factor models
- **Backtesting**: Strategy evaluation, performance attribution

## Mathematical Foundations

### Key Formulas
- **Normal Distribution**: $f(x) = \frac{1}{\sigma\sqrt{2\pi}} e^{-\frac{1}{2}\left(\frac{x-\mu}{\sigma}\right)^2}$
- **Central Limit Theorem**: $\frac{\bar{X} - \mu}{\sigma/\sqrt{n}} \sim N(0,1)$ as $n \to \infty$
- **Law of Large Numbers**: $\bar{X}_n \to \mu$ as $n \to \infty$
- **Bayes' Theorem**: $P(A|B) = \frac{P(B|A)P(A)}{P(B)}$

### Statistical Tests
- **t-test**: $t = \frac{\bar{x} - \mu_0}{s/\sqrt{n}}$
- **Chi-square test**: $\chi^2 = \sum \frac{(O_i - E_i)^2}{E_i}$
- **F-test**: $F = \frac{s_1^2}{s_2^2}$

## Industry Relevance

This knowledge is essential for:
- **Risk management** - Estimating portfolio risk and stress testing
- **Quantitative trading** - Developing statistical arbitrage strategies
- **Model validation** - Testing the accuracy of financial models
- **Regulatory compliance** - Meeting statistical requirements for risk reporting

## Skills Developed

- **Mathematical rigor** - Applying probability theory to financial problems
- **Statistical programming** - Implementing statistical methods in Python/R
- **Data analysis** - Extracting insights from financial datasets
- **Model building** - Creating robust statistical models for finance

## Prerequisites

- Basic calculus and linear algebra
- Familiarity with mathematical notation
- Basic programming skills (Python/R recommended)

## Next Steps

After completing this subtopic:
- **1.3 Linear Algebra & Calculus** - Advanced mathematical tools
- **3.1 Time Series Analysis** - Specialized statistical methods
- **4.1 Modern Portfolio Theory** - Application of statistical concepts

## Resources

- Probability and statistics textbooks
- Financial econometrics resources
- Statistical software documentation (SciPy, R)
- Academic papers on financial statistics

## Assessment

- Solve probability problems relevant to finance
- Implement statistical tests and confidence intervals
- Build Monte Carlo simulations for risk assessment
- Analyze real financial data using statistical methods
