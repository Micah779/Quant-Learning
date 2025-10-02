# 2.3 Derivatives Pricing Models

## Overview

This subtopic covers the fundamental models for pricing derivatives, including the Black-Scholes-Merton framework, binomial trees, and the calculation of Greeks. These models form the foundation of options trading and risk management.

## Learning Objectives

By the end of this subtopic, you should be able to:

- **Price European options** using the Black-Scholes formula
- **Implement binomial and trinomial trees** for American options
- **Calculate Greeks** (delta, gamma, theta, vega, rho) for risk management
- **Understand implied volatility** and its role in options markets

## Key Concepts

### Black-Scholes Model
- **Assumptions**: Log-normal stock prices, constant volatility, no dividends
- **Black-Scholes Formula**: $C = S_0N(d_1) - Ke^{-rT}N(d_2)$
- **Put-Call Parity**: $C + Ke^{-rT} = P + S_0$
- **Risk-Neutral Pricing**: $C = e^{-rT}E[\max(S_T - K, 0)]$

### Greeks
- **Delta**: $\Delta = \frac{\partial C}{\partial S} = N(d_1)$
- **Gamma**: $\Gamma = \frac{\partial^2 C}{\partial S^2} = \frac{n(d_1)}{S\sigma\sqrt{T}}$
- **Theta**: $\Theta = \frac{\partial C}{\partial t} = -\frac{S n(d_1) \sigma}{2\sqrt{T}} - rKe^{-rT}N(d_2)$
- **Vega**: $\mathcal{V} = \frac{\partial C}{\partial \sigma} = S\sqrt{T}n(d_1)$
- **Rho**: $\rho = \frac{\partial C}{\partial r} = KTe^{-rT}N(d_2)$

### Tree Methods
- **Binomial Tree**: $u = e^{\sigma\sqrt{\Delta t}}$, $d = e^{-\sigma\sqrt{\Delta t}}$
- **Risk-Neutral Probability**: $p = \frac{e^{r\Delta t} - d}{u - d}$
- **American Options**: Early exercise at each node
- **Trinomial Trees**: More accurate approximation with three branches

## Mathematical Foundations

### Key Formulas
- **Black-Scholes Call**: $C = S_0N(d_1) - Ke^{-rT}N(d_2)$
- **Black-Scholes Put**: $P = Ke^{-rT}N(-d_2) - S_0N(-d_1)$
- **d1 and d2**: $d_1 = \frac{\ln(S_0/K) + (r + \sigma^2/2)T}{\sigma\sqrt{T}}$, $d_2 = d_1 - \sigma\sqrt{T}$
- **Implied Volatility**: Solve for $\sigma$ given market price

### Extensions
- **Dividend Adjustments**: $S_0 \to S_0e^{-qT}$ for continuous dividends
- **Barrier Options**: Additional boundary conditions
- **Asian Options**: Path-dependent payoffs
- **Jump Diffusion**: Merton's model with jumps

## Industry Relevance

This knowledge is critical for:
- **Options trading** - Pricing and hedging strategies
- **Risk management** - Greeks-based portfolio hedging
- **Market making** - Providing liquidity in options markets
- **Structured products** - Complex derivatives pricing

## Skills Developed

- **Mathematical modeling** - Translating financial problems into mathematical frameworks
- **Risk analysis** - Understanding and managing option risks
- **Programming** - Implementing pricing models computationally
- **Market intuition** - Understanding options market dynamics

## Prerequisites

- Stochastic calculus (from 2.2)
- Programming foundations (from 1.4)
- Understanding of derivatives markets (from 1.1)

## Next Steps

After completing this subtopic:
- **2.4 Interest Rate & Credit Models** - Fixed income derivatives
- **5.1 Market Microstructure** - Options market dynamics
- **6.1 Monte Carlo Simulation** - Numerical pricing methods

## Resources

- Options pricing textbooks
- Financial mathematics papers
- Quantitative finance libraries (QuantLib)
- Options market data and analysis tools

## Assessment

- Price options using Black-Scholes formula
- Calculate Greeks for risk management
- Implement binomial trees for American options
- Understand implied volatility and market dynamics
