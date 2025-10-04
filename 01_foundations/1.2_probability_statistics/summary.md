# 1.2 Probability & Statistics

## Core Ideas (≈120 words):
**Summarize random variables & key distributions (normal vs t/heavy-tailed), expectation, variance/covariance, plus LLN and CLT in one tight paragraph.**

Some core ideas that I learned about in Topic 1.2 include random variables and key distributions, which include normal vs. heavy-tailed, expectation, variance/covariance, LLN, and CLT. 

I reviewed the topic of random variables where there exists both discrete RV (countable, like the number of "up" days for a given stock in a month) and continuous RV (stock returns). These random variables can be described by their distributions, which include probability density functions (continuous RVs), probability mass functions (discrete RVs), and cumulative distribution functions (probability of a variable, ie, returns falling below a certain threshold). 

With distributions, we see normal distributions (bell-shaped) and t-distributions (heavy-tailed distributions, where the population standard deviation is unknown), which typically resemble financial data better. We use random variables in finance because we assume the markets are stochastic (random). 

E(x), known as the expected value of x or 'expectaion of x', can be calculated for both discrete and continuous RVs using formulas of the value of x and probability of x, algebraic for discrete and calculus-based (integrals) for continuous RVs. 

The Law of Large Numbers (LLN) states that sample means approximate the true mean, and as you increase the number of samples, you will get a more accurate estimate of the actual value. The Central Limit Theorem states that as the sample size n increases, the distribution of x will become more normalized/Gaussian, regardless of the distribution of the individual sample n. These two ideas are the foundation for many assumptions in finance from calculating returns and backtesting standards (LLM) to options contract pricing models like Black Scholes which assumes a log normal/Guassian distribution (CLT).

## Two Equations, One Insight (≈80–120 words):
**State two equations (e.g., E[X], Var(X), HAC SE for the mean, or CI for μ). Explain in plain English what each buys you in practice.**

**Var(x) = E(x^2) - mean^2** is a measure of offset from the mean and is used in finance to gauge risk. A high variance could signal a high amount of risk or a possible opportunity to make an alpha-generating move if you are using something like a mean-reversion strategy. 

**E(x)** represents the expected value of x and is used in many areas of finance to estimate returns, volatility, and other variables of interest, in conjunction with the estimated probability of x occurring:
- E(x) = x*p(X=x) (discrete RVs) 
- E(x) = integral of x * f(x) (continuous RVs)

## Short-Response Questions

### LLN vs. CLT:
**What different promises do they make about sample means, and how do those differences affect how long a backtest should be vs. how wide your confidence intervals are?**

**LLN** promises that sample means are estimators of the true mean, which would hint that a longer backtest (more samples) is a better estimator of the actual value you're looking for (ie, Sharpe ratio). 

**CLT** promises that as your sample size increases, the overall distribution of your experiment's mean will become more normalized/Gaussian regardless of the distribution of individual sample means, which hints that specific models are appropriate for estimating variables like Black Scholes for options pricing (even though this is not really good because we have things like tails, black swan events).

### When Gaussian Hurts:
**Give a concrete trading/risk scenario where normal assumptions understate risk. What's your quick fix (model or method) and why?**

Gaussian distributions can be problematic when normal assumptions understate risk, for example, by assuming normal pricing distributions for options and then having your strategy compromised by volatility changes and spikes that are not accounted for in a lognormal model like the Black-Scholes model. 

**Fix:** Move to a model that accounts for volatility changes and stress testing of t-shaped distributions.