# Numerical Calculus in C++ : Week 1; Forward difference
### Note: This project uses Generative AI as a means for making the process of following along easier to understand, because I may or may not have a unique way of formatting Markdowns
This experiment measures how step size affects the forward-difference estimate of $f'(2)$ for $f(x)=x^2$. The exact derivative is 4. 

## Build and run

Open a terminal in the folder containing [main.cpp](main.cpp). Use a C++17 compiler. Pick the commands for your setup. If your terminal cannot find the compiler command, check that the compiler is installed and that you are using its configured terminal.

**Windows PowerShell with GCC**

```powershell
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o week1.exe
.\week1.exe
```

**Windows with Visual Studio C++ tools**

Run these in a Developer PowerShell where `cl` is available.

```powershell
cl /std:c++17 /EHsc /W4 /Feweek1.exe main.cpp
.\week1.exe
```

**macOS or Linux**

```bash
c++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o week1
./week1
```

The starter run prints a CSV header and a TODO message. Implement `forward_difference` in `main.cpp`, then rebuild and rerun. A completed run prints one row per step size, with the estimate and its absolute error from 4.

## Results


| Step size | Estimated derivative | Absolute error |
| --- | --- | --- |
| 0.1 | 4.1 | 0.1 |
| 0.01 | 4.01 | 0.01 |
| 0.001 | 4.001 | 0.0009999999997 |

## Week 1 notes

- **Prediction.** My hypothesis: as the step size decreased, the error will decrease.
- **Observation.** As shown in the table above, we observe that the error decreases as you decrease the step size. Recall from the definition of the derivative: lim_h->0 ((x+h)-f(x)/h)
- **Next step.** My next plan is to move to central difference method, which uses symmetric points around x. Absolute error should converge to 0 faster.

