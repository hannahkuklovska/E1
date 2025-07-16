# Newton's Method for Finding the n-th Root

This project implements **Newton's Method** to compute the **n-th root** of a number. Newton's Method is a powerful iterative technique for numerically solving equations of the form \( f(x) = 0 \).

---

## 🔧 Functions

### `mocnina` (Power Function)

Calculates the value of `base` raised to a given `exponent`.  
Handles both **positive and negative exponents**.

### `mta_odmocnina` (Root Function)

Uses Newton’s Method to approximate the **m-th root** of a number `x`.  
Iteratively improves the estimate until it satisfies a small error tolerance.

---

## ▶️ How to Run

The code includes a `main` function that demonstrates how to use `mta_odmocnina`:

```c
double x = 16;
int n = 2;
double res;

mta_odmocnina(n, x, &res);

printf("The result of finding the %d-th root of %.2f is: %.4f\n", n, x, res);
```

Expected output:
```
The result of finding the 2-th root of 16.00 is: 4.0000
```

---

## 📥 Inputs and Outputs

- **`x`**: The input number
- **`m`**: The root degree (e.g., 2 = square root, 3 = cube root)
- **`res`**: Pointer to the result

---

## 💡 Notes

- Written in C
- Handles negative exponents and converges based on a defined `TOL` (tolerance)
- Useful for learning numerical methods and floating-point precision behavior

