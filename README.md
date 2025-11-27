# Mahidhar-ITP
Project Title

Goods Receipt Management System in C

📌 Abstract

The Goods Receipt Management System is a console-based C program designed to help users record, organize, and display details of goods received from suppliers. The system allows the user to input supplier information, item names, quantities, and prices. After data entry, it automatically calculates the total cost for each item and the final grand total. This project demonstrates the use of structures, arrays, loops, and formatted output in C programming. It is simple, efficient, and suitable for learning basic data management and struct usage in C.

📌 Project Features
✅ 1. Supplier Information Input

The system allows the user to enter the supplier’s name for easy identification.

✅ 2. Item Entry System

Users can enter:

Item name

Quantity

Price per unit

✅ 3. Automatic Calculations

The system calculates:

Total cost per item

Grand total of all items

✅ 4. Real-Time Summary Display

After all inputs, the program prints a clear and formatted goods receipt.

✅ 5. Use of Structures

The project uses struct Item to store item details efficiently.

✅ 6. Dynamic Number of Items

The program creates an array based on user input (struct Item items[n];).

✅ 7. Structured and Professional Output Format

The output resembles a real goods receipt for easy understanding and documentation.

📌 Screenshot of Output:
GOODS RECEIPT SYSTEM  
Enter Supplier Name: FreshFarms  
Enter number of items received: 3  

Enter details for item 1  
Item Name: Apples  
Quantity: 10  
Price per unit: 2.50  

Enter details for item 2  
Item Name: Bananas  
Quantity: 6  
Price per unit: 1.20  

Enter details for item 3  
Item Name: Milk  
Quantity: 4  
Price per unit: 15.00  


========== GOODS RECEIPT ==========  
Supplier: FreshFarms  
-----------------------------------  
Item            Qty        Price      Total  
-----------------------------------  
Apples          10         2.50       25.00  
Bananas         6          1.20        7.20  
Milk            4          15.00      60.00  
-----------------------------------  
Grand Total: 92.20  
===================================
