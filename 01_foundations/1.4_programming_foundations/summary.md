# 1.4 Programming Foundations

## Overview

This subtopic covers the essential programming skills and tools required for quantitative finance, including core languages, development practices, and computational efficiency techniques.

## Summary

### 1. Reproducibility vs. Speed

**In your own workflow, what specific steps ensure someone else could rerun your results a month from now?**

When working in quantitative finance your systems, models and automations have to be reproducible, and in many cases fast. Ensuring you have a solid version control, dockerization system, logging and clean code standards are a few of the steps that would help ensure you are creating reproducible products.

**Name one place you'd trade a bit of speed for reproducibility (and why), and one place you'd trade a bit of reproducibility overhead for speed (and why).**

The tradeoff between speed and reproducibility depends on what your desired outcomes are. For a market maker that profits off of the spread and nanosecond - millisecond discrepancies, speed is likely the priority, and reproducibility could be sacrificed. On the other hand if you are a Research or Prop Shop, you might be working on building and distributing a large variety of strategies and focus on reproducibility of your systems/automations so that you can quickly and repeatedly build, test, and evaluate strategies.

### 2. Right Tool for the Job

**Given Python, C++, R, and SQL, explain which language you'd choose for: (a) cleaning a messy corporate actions feed, (b) running a 10,000-path Monte Carlo pricer under time pressure, and (c) performing hypothesis tests on factor ICs. Justify each choice in terms of performance, developer time, and team handoff.**

For cleaning a messy corporate actions feed (data) I would use SQL because it is a query language (used to fetch, move, and place data) which is perfect for organizing a database. For running a 10,000 path Monte Carlo pricer under time pressure I would use C++ because it is great for high volume tasks that also need speed optimization which is hinted at with the time pressure constraint. Lastly for performing hypothesis tests on factor ICs I would use R programming language because it is great for statistical analysis of data.

### 3. Testing What Matters

**Suppose your min-var backtest suddenly improves by 20% after "small refactors." What two tests or checks do you run first to rule out leakage/bugs?**

Given a min-var backtest that suddenly improved by 20% after small refactors. I would check for leakage/bugs by running a timestamp shift (look ahead bias) test. This would be performed by lagging every input by +1 bar. If the performance collapses to the old level or worse, the previous run was using future info. Secondly, I would run the backtest with costs on and costs off to make sure that the PNL with costs off >= PNL with costs on. A sudden drop in costs or turnover constraints often explains a "free" +20%

**What one invariant would you assert in code to catch this automatically next time?**

To catch this next time we can make sure no feature or estimator may include data from the decision bar. This means at decision time t features/stats must be built from data strictly before t. This assert would rule out look ahead bias. Also have an assert that would fail if the after costs PNL >= before costs PNL. This is checking for costs inequality.