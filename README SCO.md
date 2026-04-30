# Shopping Cart Optimizer (0/1 Knapsack)

## 📌 Description
This project helps users select the best items to purchase within a limited budget.

It uses the **0/1 Knapsack Algorithm (Dynamic Programming)** to maximize total value.

---

## ⚙️ How It Works
- User inputs:
  - Number of items
  - Weight (price) of each item
  - Value (importance) of each item
  - Budget (capacity)
- Program calculates the maximum value achievable without exceeding budget.

---

## ▶️ How to Run

### Step 1: Compile
g++ main.cpp -o app

### Step 2: Run
./app

---

## 🧠 Algorithm Used
- Dynamic Programming
- Time Complexity: O(n × capacity)

---

## 📌 Example Input

Enter number of items: 3  
Enter weights: 10 20 30  
Enter values: 60 100 120  
Enter capacity: 50  

## 📌 Output

Maximum value you can get = 220

---

## 🎯 Use Case
- Budget shopping
- Resource allocation
- Investment selection
