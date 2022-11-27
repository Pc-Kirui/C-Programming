**Objectives**

1. To be able to create and use structures, unions and enumerations.
2. To be able to pass structures to functions by value ans by reference.
3. To be able to manipulate data with bitwise operators.
4. To be able to create bit fields for storing data compactly.

**Introduction**

*Structures* Are user defined data type that groups elements or variables of different data types under a single name.Structures may contain variables of many different data types in contrast to arrays that contain elements of the same data type.Structures are commonly used to define records to be stored in files.Pointers and structures facilitate the formation of more complex data structures such as linked lists,queues,stacks and trees.

**Structure definitions**

Stuctures are derived data types - they are constructed using objects of other types. **_Example_**: 

```
    struct card{
        char *face;
        char *suit;
   };
   ```

   *Keyword Struct* - Introduces structure definition.The identifier card is the *structure tag*, which names the structure definition and is used with the keyword struct to declare variables of the structure type.
   
   *Members* - Variable declared within the braces of the structure definition.Members of the same structure type must have unique names, but two different structures types may contain members of the same name without conflict.Each structure definition must end with a semicolon.

   Definition of struct card contains two members of type char *face and suit. Structure members can be variables of the primitve data types (e.g int, float, double etc.),of aggregates such as arrays and other structures.
   Structures members, however, can be of a variety of a variety of data types. **_Example_**: 

   ```
   struct employee{
    char firstName[20];
    char lastName[20];
    int age;
    char gender;
    double hourlySalary;
   };
   ```
   Contains character array members for the first and last names, an int member for the employee's age, a char member that would contain 'M' or 'F' for the employee's gender ans a double member for the employee's hourly salary.

   A structure cannot contain an instance of itself.eg, a variable of type struct employee cannot be declared in the definition for struct employee. A pointer to struct employee, however, may be included.

   _Self referential structure_ - A structure containing a member that is a pointer to the same structured type.Self referential structures are used to build linked data structures.

   Structure definition do not reserve any space in memory,rather each definition creates a new data type that is used to define variables. Structure variables are defined like variables of other types. eg
   ```
   struct card aCard, deck[52], *cardPtr;
   ```
   declares aCard to be a variable of type struct card, declares deck to be an array with 52 elements of type struct card and declares cardPtr to be a pointer to struct card. Variables of a given structure type may also be declared by placing a comma seperated list of the variables between the closing brace of the structure definition and the semicolon that ends the structure defintion.

   The only valid operations that may be performed on structures are the following:
   + Assigning structure variables to structure variables of the same type.
   + Taking the address (&) of a structure variable.
   + Accessing the members of a structure variable.
   + Using the size operator to determine the size of a structure variable.

   **Initializing Structures**
