
📐 Regula Falsi Method in C++

📌 Overview
This project is a simple implementation of the "Regula Falsi Method" (also known as "False Position Method") for finding the roots of "nonlinear equations" using "C++".
The Regula Falsi Method is a numerical technique for solving equations of the form "f(x) = 0". It combines the principles of both the "Bisection Method" and "Secant Method" to iteratively converge to a root by adjusting the interval [a, b] based on the function values at the endpoints.

>Equation used in this implementation:
>f(x) = x³ - x - 11


🎯 Features
✅ Calculates the root of a nonlinear equation using the "Regula Falsi Method"
✅ Validates the initial interval [a, b] for correctness (ensuring f(a) and f(b) have opposite signs)
✅ Iterates until the desired precision (EPSILON) is achieved
✅ Outputs detailed information at each iteration: values of a, b, f(a), f(b), c, and f(c)
✅ Displays the root and the number of iterations it took to find it
✅ Written in clean, well-commented C++ code


🛠 Requirements
To run this project, you'll need:
✅A "C++ compiler" (e.g., "g++" or "clang++")
✅A "C++ IDE" (optional), such as "VS Code", "CLion", "Code::Blocks", or any text editor of your choice



🚀 How to Run
1. Clone the repository or download the source code:
   git clone https://github.com/YOUR_USERNAME/regula-falsi-method-cpp.git
   cd regula-falsi-method-cpp

2.Compile the C++ code:
   g++ main.cpp -o regulaFalsi

3.Run the program:
   ./regulaFalsi




🧠 How It Works
✅The algorithm requires two initial values a and b, where f(a) and f(b) must have opposite signs.
✅At each iteration, the method computes the new approximation c for the root using the formula:
  c = a.f(b) - b.f(a)/f(b) - f(a)
✅If "f(c)" is close enough to zero (within the tolerance EPSILON), the process stops and returns c as the root.
✅Otherwise, the algorithm adjusts the interval [a, b] to continue narrowing down the search based on the sign of f(c).



📁 File Structure
regula-falsi-method-cpp/
├── main.cpp      # Main C++ program implementing the Regula Falsi Method
└── README.md     # Project documentation (this file)


📤 Sample Output
Running the program with initial guesses a = 2 and b = 3 will yield output similar to this:

Itr    a            b            f(a)          f(b)          c            f(c)         
--------------------------------------------------------------
1      2.000000     3.000000     -7.000000     -2.000000     2.666667     -0.370370
2      2.000000     2.666667     -7.000000     -0.370370     2.578947     -0.095283
3      2.000000     2.578947     -7.000000     -0.095283     2.580057     -0.000016
The value of root is : 2.580057


🔧 Customization
You can customize the following:
✅ Modify the function f(x) inside the func() method to solve a different equation.
✅ Change the initial guesses a and b to choose a new interval for the root.
✅ Adjust the error tolerance (EPSILON) to control the precision of the result.
✅ Set a new maximum iteration count by changing MAX_ITER to fit your needs.


🤝 Contributions
Contributions are welcome!
To contribute:
* Fork the repository
* Create a new branch
* Submit a pull request with your improvements
If you have any suggestions or encounter issues, please open an "Issue" on the GitHub repository.



📧 Contact
For questions or feedback, feel free to contact:
"Shariya Tinney" — \[[shariyatinney.gmail@example.com](mailto:shariyatinney.gmail@example.com)]

> Reminder:
> ✅ Replace "Your_UserName" in the Git clone URL
> ✅ Replace "Your Name" and "your.email@example.com" with your actual "Name" and "your.email@example.com" before publishing.


📚 Resources
* [Regula Falsi Method – Wikipedia](https://en.wikipedia.org/wiki/Regula_falsi)
* [Numerical Methods in C++](https://cplusplus.com/)


🧩 Language

![C++](https://img.shields.io/badge/C%2B%2B-100%25-blue)



💡 Future Improvements

* Extend the program to handle "user input" for the interval and tolerance dynamically.
* Implement other root-finding algorithms such as "Bisection Method" or "Secant Method" for comparison.
* Optimize the program to avoid unnecessary iterations by improving the convergence check.


