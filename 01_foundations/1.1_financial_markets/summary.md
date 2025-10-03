# 1.1 Financial Markets & Instruments

## Overview

This subtopic covers the fundamental building blocks of financial markets, including different asset classes, market microstructure, and the mechanics of trading. Understanding these concepts is essential for any quantitative finance professional.

## Key Learning Outcomes

### Market Structure Impact
The structure of markets has a significant impact on how quants model and execute trades. **Exchange-based markets** (NYSE, CME) provide:
- Clear rules and systems for data retrieval
- Standardized frequency, location, and asset class specifications
- Matching engines that process transactions
- Regulated environment with transparent pricing

**Over-the-Counter (OTC) markets** differ significantly:
- Less regulated transactions
- Commonly used for exotic assets
- Niche use cases (interest rate swaps, credit default swaps)
- Different liquidity levels and information availability

### Asset Class Comparison

#### Commodities vs. FX Markets

**Commodities Drivers:**
- Geopolitical factors
- Seasonality patterns
- Complement and substitute goods relationships
- Supply and demand fundamentals

**FX Drivers:**
- Macroeconomic fundamentals
- Inflation rates
- Currency valuation
- Interest rate differentials

**Modeling Approaches:**
- **Commodities**: Quantitative statistics, mean reversion strategies
- **FX**: Technical analysis, cointegration, quantitative statistical analysis

### Derivatives Revolution

The **1970s marked a turning point** with the Black-Scholes pricing model:
- Enabled significant options contract trading
- Foundation for European Black-Scholes model
- Boomed derivatives trading (futures, FX derivatives)
- Made mathematical tools standard: derivatives, stochastic calculus, PDEs

**Key Assumptions** (and their limitations):
- Log-normal returns: $dS = \mu S dt + \sigma S dW$
- Constant volatility: $\sigma = \text{constant}$
- No jumps: Continuous price paths

### Market Participants

#### Regulators
- Set standards for risk and fair trading
- Standardize risk management practices
- Establish stress testing benchmarks
- Prevent systemic risks (2008 recession, 2010 flash crash)

#### Market Makers
- Provide liquidity through bid-ask spreads
- Use quantitative statistics and low-latency systems
- Profit from spreads and fees/commissions
- Maintain order book balance

#### Asset Managers
- Focus on risk management, not market beating
- Portfolio optimization strategies
- Large order execution without price impact
- Provide significant market liquidity

#### Prop Firms
- Trade in-house capital
- Higher risk tolerance
- Innovation forefront (HFT, ML, alternative data)
- Cutting-edge quantitative strategies

#### Hedge Funds
- Manage large investor capital
- Modern strategies: HFT, ML, alternative data
- Alpha generation focus
- Sophisticated risk management

### Data Conventions Criticality

**Data quality is fundamental** for accurate backtesting and statistics:

#### Key Conventions
- **Returns**: Log-normal vs. arithmetic returns
- **Volatility**: Realized vs. implied volatility
- **Calendars**: Trading windows, holidays, day count conventions
- **Corporate Actions**: Dividends, splits, mergers

#### Risk of Errors
- Minor data convention errors → completely distorted models
- Potential losses: tens of thousands to millions of dollars
- Survivorship bias can kill hedge funds
- Badly tested strategies lead to significant losses

## Mathematical Foundations

### Black-Scholes Model
$$C = S_0 N(d_1) - Ke^{-rT}N(d_2)$$

Where:
- $d_1 = \frac{\ln(S_0/K) + (r + \sigma^2/2)T}{\sigma\sqrt{T}}$
- $d_2 = d_1 - \sigma\sqrt{T}$

### Volatility Concepts
- **Implied Volatility**: Forward-looking, market-derived expectation
- **Realized Volatility**: Backward-looking, statistical measurement of past movements

## Industry Applications

### Trading Strategy Design
- **Target**: Retail traders, small hedging discrepancies
- **Avoid**: Informed traders with superior information
- **Focus**: Realized vs. implied valuation discrepancies

### Specialization Considerations
**Equities** offer advantages:
- Fundamental business analysis opportunities
- Multiple market player access
- Both low and high-frequency trading systems
- Significant market liquidity

## Assessment Questions

### 1. Asset Class Specialization
**Question**: If you had to specialize in one asset class (equities, fixed income, FX, commodities), which would you choose and why?

**Answer**: Equities specialization offers:
- Fundamental business analysis opportunities
- Access to multiple market players (hedge funds, prop firms, asset managers)
- Both low and high-frequency trading systems
- Significant market liquidity

### 2. Volatility Analysis
**Question**: Why do you think implied volatility (from options) can differ from realized volatility (from historical data)?

**Answer**: 
- **Implied Volatility**: Forward-looking measure derived from options market prices, reflecting market expectations
- **Realized Volatility**: Backward-looking measure quantifying actual past price movements
- **Key Difference**: Implied is market prediction vs. realized is statistical measurement

### 3. Trading Strategy Design
**Question**: Imagine you're designing a new trading strategy: which market participant would you want to trade against, and which would you want to avoid?

**Answer**:
- **Avoid**: Informed traders with superior information
- **Target**: Retail traders, small hedging discrepancies
- **Strategy**: Focus on realized vs. implied valuation discrepancies
- **Approach**: Intraday, swing, or long-term based on opportunities

## Next Steps

After completing this subtopic:
- **1.2 Probability & Statistics** - Mathematical foundations for modeling
- **2.1 Time Value of Money** - Pricing and valuation concepts
- **5.1 Market Microstructure Basics** - Advanced trading concepts

## Resources

- Financial markets textbooks
- Exchange websites and documentation
- Market data providers (Bloomberg, Reuters, Yahoo Finance)
- Regulatory filings and guidelines
