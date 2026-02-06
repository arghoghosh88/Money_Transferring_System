# AK Money Transferring System

**Author:** [Argho]  
**Course:** [CSE]  
**Date:** [7-2-2026]  

---

## Project Overview

The **AK Money Transferring System** is a console-based C++ application that simulates basic functionalities of a mobile wallet or banking system. It allows users to manage their finances securely, perform transactions, and access account details using PIN authentication.  

This project demonstrates **Object-Oriented Programming (OOP)** concepts, **file handling**, and **menu-driven user interaction** in C++.  

---

## Features

- **Account Creation:** Users can create new accounts with their name, phone number, PIN, and initial balance.  
- **Login:** Existing users can log in using their phone number and PIN.  
- **Cash Out:** Withdraw money to other accounts.  
- **Cash In:** Add money to the account.  
- **Send Money:** Transfer money to other registered accounts.  
- **Mobile Recharge:** Recharge any mobile number using account balance.  
- **Payments & Bill Pay:** Pay utility bills and other payments.  
- **Balance Enquiry & Mini Statement:** Check current balance and account information.  
- **PIN Reset:** Securely change the PIN when needed.  

---

## System Requirements

- **Compiler:** Any C++ compiler (e.g., GCC, Code::Blocks, Visual Studio)  
- **Operating System:** Windows, Linux, or macOS  
- **Dependencies:** `<bits/stdc++.h>` and `<conio.h>` for input/output handling  

---

## How to Use

1. **Run the program**.  
2. **Choose account status:**  
   - Press `Y` if you already have an account.  
   - Press `N` to create a new account.  
3. **Login / Registration:**  
   - Existing users: Enter phone number and PIN to login.  
   - New users: Provide name, phone number, PIN, and initial balance.  
4. **Access the menu:** Select any transaction or feature:  
   - `1` - Cash Out  
   - `2` - Cash In  
   - `3` - Send Money  
   - `4` - Mobile Recharge  
   - `5` - Payment  
   - `6` - Bill Pay  
   - `7` - My App (Balance Enquiry, Mini Statement, Helpline)  
   - `8` - PIN Reset  
5. **Enter your PIN** when prompted for secure transactions.  
6. **All changes are saved** to the file `MT.txt`.  

---

## File Handling

- **MT.txt:** Stores all user information including phone number, PIN, and balance.  
- **temp.txt:** Used for updating user data safely after each transaction.  

**Important:** Never delete `MT.txt` as it contains all account data.  

---

## Code Structure

- **user Class:** Contains all attributes and functions for user management.  
- **Main Menu:** The `Choice()` function handles all options for transactions.  
- **Transaction Functions:** `cash_out()`, `Cash_In()`, `Send_Money()`, `Recharge()`, `Payment()`, `Pay_bill()`  
- **Security:** PIN validation is required for all sensitive operations.  
- **File Management:** Functions `SaveInfoToFile()`, `LoginFile()`, and `updateFile()` manage persistent data.  

---

## Future Enhancements

- Add **multiple user support** with proper account linking.  
- Implement **transaction history logs**.  
- Introduce **graphical user interface (GUI)**.  
- Improve **security** with encrypted PIN storage.  

---

## Conclusion

The AK Money Transferring System demonstrates how a basic mobile wallet can be implemented using C++. This project improves understanding of **OOP**, **file handling**, and **user interaction** while providing a functional and secure simulation of digital transactions.
---
**Prepared by:** <br> 
**Argho Ghosh**  <br>
**Student of CSE, BUBT**
