# Green Efficiency Analysis

## Measurement Methodology

The experiments measured execution time using the C `clock()` function and converted the results to seconds using `CLOCKS_PER_SEC`. All programs were compiled using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long` and executed in the same environment to keep the measurements comparable.

The baseline program performed 100,000,000 iterations of a deterministic calculation. It was executed three consecutive times. The measured execution times were **[BASELINE RUN 1] seconds**, **[BASELINE RUN 2] seconds**, and **[BASELINE RUN 3] seconds**. These measurements establish the runtime baseline for the other experiments.

The algorithm comparison program was also executed three times. The naive implementation produced times of **[NAIVE 1]**, **[NAIVE 2]**, and **[NAIVE 3] seconds**, while the single-pass implementation produced **[SINGLE 1]**, **[SINGLE 2]**, and **[SINGLE 3] seconds**. The averages were **[NAIVE AVERAGE] seconds** and **[SINGLE-PASS AVERAGE] seconds**, respectively.

The instrumentation experiment measured the total runtime and the three individual phases. Its output recorded **[TOTAL] seconds** for the total execution, with **[BUILD] seconds** spent building the dataset, **[PROCESS] seconds** processing it, and **[REDUCE] seconds** reducing it to a checksum.

## Observed Performance Differences

The clearest performance difference occurred between the two algorithm implementations. The naive implementation averaged **[NAIVE AVERAGE] seconds**, compared with **[SINGLE-PASS AVERAGE] seconds** for the single-pass implementation. This means the naive implementation was approximately **[RATIO] times slower** based on the measured averages.

Both implementations returned the same result, demonstrating that the performance difference was not caused by producing different outputs. The measurements therefore provide direct evidence that the implementations can solve the same problem with substantially different execution costs.

The instrumentation results also show where runtime was spent inside the multi-phase program. The total runtime was **[TOTAL] seconds**, while the three measured phases took **[BUILD]**, **[PROCESS]**, and **[REDUCE] seconds**. The phase with the largest measured time was **[SLOWEST PHASE]**, making it the most significant measured contributor to runtime.

## Relation Between Runtime and Energy Consumption

Runtime can be used as a proxy for CPU activity in this experiment. A computation that takes longer generally keeps the processor active for a longer period than an equivalent computation that finishes sooner. The algorithm comparison therefore provides evidence that reducing runtime can also reduce the amount of time the CPU is actively working.

However, the measurements do not directly measure electrical energy or power consumption. The results only establish differences in execution time. Consequently, the experiments support a relationship between runtime and potential energy efficiency, but they do not provide a measurement of actual energy consumed.

## Limitations of the Experiment

There are several limitations. First, `clock()` measures processor time rather than directly measuring electrical power or energy. Second, execution times can vary between consecutive runs because of operating-system activity and other environmental factors. This can be seen by comparing the three baseline measurements: **[BASELINE RUN 1]**, **[BASELINE RUN 2]**, and **[BASELINE RUN 3] seconds**.

The measurements are also relatively short for some phases, so timer resolution can affect the displayed values. Finally, the experiments were performed on one machine and environment, so the measured times should not automatically be treated as representative of every computer.

## Practical Engineering Takeaway

The measurements demonstrate that algorithmic choices can have a much larger effect on runtime than small implementation changes. The naive algorithm required **[NAIVE AVERAGE] seconds** on average, while the single-pass algorithm required only **[SINGLE-PASS AVERAGE] seconds**. This measured difference shows why engineers should consider computational efficiency when designing software.

The instrumentation experiment also demonstrates the value of measuring individual phases rather than only measuring total runtime. By identifying that **[SLOWEST PHASE]** consumed the largest measured portion of execution time, optimization efforts can be directed toward the part of the program where they are most likely to have an observable effect.

Overall, the experiments show that measuring runtime provides useful evidence for comparing implementations and identifying expensive phases, while recognizing that runtime alone is not a direct measurement of energy consumption.

