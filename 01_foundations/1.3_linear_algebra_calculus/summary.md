# 1.3 Linear Algebra & Calculus

## 1. Diversification & the Covariance Matrix

**Question:** In your own words, explain how $w^T \Sigma w$ captures portfolio risk. Compare two cases: (i) two assets with $\rho = 0.8$ vs (ii) $\rho \approx 0$. What happens to the cross term $2w_1 w_2 \sigma_1 \sigma_2 \rho$, and what does that imply for diversification and position sizing in practice?

**Answer:** The equation itself represents portfolio risk and sums up each assets volatility and the way the assets correlate with each other. The cross term is big and positive. With a correlation of 0.8 which is high, you can assume that as one asset spikes so will the other one, which means risk is higher and you should likely diversify your portfolio more or lower your position size. Where if the correlation is low ~0, then the two assets do not typically move together and holding both is a lower risk and you could increase position size.

## 2. Interpreting PCA in Risk Management

**Question:** Suppose PCA on $\Sigma$ shows PC1 explains 65–75% of variance and its loadings are all positive and similar across equities. What does that tell you about the dominant risk in the portfolio, and how would you hedge or budget risk against it? Finally, note one limitation of relying on PCA loadings estimated from a specific sample window.

**Answer:** If the principal component analysis on variance, shows that principal component 1 explains 65-75% of variance (a lot) and its loadings are all positive and similar across equities. We know that a single market-wide factor is driving most of the movement. To manage this you can hedge the market factor with an index future or ETF short, cap your portfolio's exposure to PC1 in your risk budget or add assets that don't load heavily on that factor. The main limit is instability, PCA depends on the sample window. Factors and loadings can shift when regime change, volatility spikes, or sectors rotate. So re-estimating regularly is important.
