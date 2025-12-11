# Unit Conversion Program

This program lets the user convert values between several common unit pairs. It works by showing a menu, asking the user to pick a type of conversion, and then performing the calculation based on the direction they choose. The program supports temperature, length, distance, and volume conversions, and it continues to run until the user chooses to quit. :contentReference[oaicite:0]{index=0}

# Features

The converter uses separate functions for each unit pair. After selecting a category from the menu, the user chooses the direction of conversion. The program then reads the input value, applies the correct formula, and prints the new value.

Supported conversions

- Celsius to Fahrenheit  
- Fahrenheit to Celsius  

- Centimetre to Inch  
- Inch to Centimetre  

- Kilometer to Mile  
- Mile to Kilometer  

- Gallon to Liter  
- Liter to Gallon  

The program checks user input and displays a message if the selection is invalid.

# How the Program Works

The main menu asks the user to choose a conversion type. After picking an option, the program calls the matching helper function. Each helper function asks for the direction of conversion, takes the value, applies the formula, and prints the new result.

The menu repeats until the user enters zero to quit.

```vbnet
Choose an option listed below

1 - Conversion between Celsius and Fahrenheit
2 - Conversion between Centimetre and Inch
3 - Conversion between Kilometer and Mile
4 - Conversion between Gallon and Liter
0 - Quit

Enter a selection: 1

What would you like to do?
C - Conversion from Celsius to Fahrenheit
F - Conversion from Fahrenheit to Calsius

Enter your value: 20
Your new value is 68.00 F
```
