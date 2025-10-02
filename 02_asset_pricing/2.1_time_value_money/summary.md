# 2.1 Time Value of Money & Discounting

## Overview

This subtopic covers the fundamental concept of time value of money, which is the foundation for pricing all financial instruments. Understanding discounting, yield curves, and forward rates is essential for quantitative finance.

## Learning Objectives

By the end of this subtopic, you should be able to:

- **Calculate present and future values** using various discounting methods
- **Construct and interpret yield curves** for different maturities and credit qualities
- **Understand forward rates** and their relationship to spot rates
- **Apply discounting techniques** to price bonds, swaps, and other fixed-income instruments

## Key Concepts

### Time Value of Money
- **Present Value**: $PV = \frac{FV}{(1+r)^t}$
- **Future Value**: $FV = PV(1+r)^t$
- **Continuous Compounding**: $PV = FV \cdot e^{-rt}$
- **Annuities**: Present value of regular cash flows

### Yield Curves
- **Spot Rates**: Zero-coupon bond yields for different maturities
- **Yield Curve Construction**: Bootstrapping from market prices
- **Yield Curve Shapes**: Normal, inverted, flat, humped
- **Credit Spreads**: Corporate vs. government yield curves

### Forward Rates
- **Forward Rate Formula**: $f_{t,T} = \frac{(1+r_T)^T}{(1+r_t)^t} - 1$
- **Forward Rate Agreements (FRAs)**: Interest rate derivatives
- **Interest Rate Swaps**: Fixed vs. floating rate exchanges
- **Bootstrapping**: Deriving forward rates from spot rates

## Mathematical Foundations

### Key Formulas
- **Present Value**: $PV = \sum_{t=1}^n \frac{CF_t}{(1+r)^t}$
- **Yield to Maturity**: $\sum_{t=1}^n \frac{C}{(1+y)^t} + \frac{F}{(1+y)^n} = P$
- **Forward Rate**: $f_{t,T} = \frac{r_T T - r_t t}{T-t}$
- **Duration**: $D = \frac{1}{P} \sum_{t=1}^n \frac{t \cdot CF_t}{(1+y)^t}$

### Bond Pricing
- **Clean Price**: $P = \sum_{t=1}^n \frac{C}{(1+y)^t} + \frac{F}{(1+y)^n}$
- **Accrued Interest**: $AI = C \cdot \frac{days_{accrued}}{days_{period}}$
- **Dirty Price**: $P_{dirty} = P_{clean} + AI$

## Industry Relevance

This knowledge is critical for:
- **Fixed income trading** - Pricing bonds and interest rate derivatives
- **Risk management** - Calculating duration and convexity
- **Portfolio management** - Asset allocation and yield curve strategies
- **Derivatives pricing** - Foundation for more complex instruments

## Skills Developed

- **Financial mathematics** - Applying mathematical concepts to pricing
- **Market analysis** - Interpreting yield curves and market conditions
- **Risk assessment** - Understanding interest rate sensitivity
- **Programming** - Implementing pricing models computationally

## Prerequisites

- Basic understanding of financial markets (from 1.1)
- Mathematical foundations (from 1.2, 1.3)
- Programming skills (from 1.4)

## Next Steps

After completing this subtopic:
- **2.2 Stochastic Calculus** - Advanced mathematical tools
- **2.3 Derivatives Pricing Models** - Application to options and derivatives
- **2.4 Interest Rate & Credit Models** - Specialized fixed income models

## Resources

- Fixed income textbooks
- Financial mathematics resources
- Market data sources (Treasury.gov, FRED)
- Quantitative finance libraries (QuantLib)

## Assessment

- Calculate present values and yields for various instruments
- Construct yield curves from market data
- Implement forward rate calculations
- Apply discounting to real-world pricing problems
