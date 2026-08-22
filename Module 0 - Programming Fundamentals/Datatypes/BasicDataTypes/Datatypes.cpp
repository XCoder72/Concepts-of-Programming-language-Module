/*  Data Types
      │
      ├── Integer - Stores whole numbers.
      ├── Float / Double - Stores decimal numbers.
      ├── Character - Stores a single character.
      ├── String - Stores a sequence of characters.
      └── Boolean - Stores either True or False */

      # include <iostream>
      using namespace std;

        int main() {
            int var1 = 10;
            float var2 = 10.5;
            char var3 = 'A';
            string var4 = "Hello, World!";
            bool var5 = true;
    
            cout << "Integer: " << var1 << endl;
            cout << "Float: " << var2 << endl;
            cout << "Character: " << var3 << endl;
            cout << "String: " << var4 << endl;
            cout << "Boolean: " << var5 << endl;
    
            return 0;
        }

        // C++ is a statically typed language,The variable type cannot change at runtime. Once a variable is declared with a specific type, it cannot be assigned a value of a different type without explicit casting.