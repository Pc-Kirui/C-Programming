**Objectives**

1. To be able to create and use structures, unions and enumerations.
2. To be able to pass structures to functions by value ans by reference.
3. To be able to manipulate data with bitwise operators.
4. To be able to create bit fields for storing data compactly.

**Introduction**

_Structures_ Are user defined data type that groups elements or variables of different data types under a single name.Structures may contain variables of many different data types in contrast to arrays that contain elements of the same data type.Structures are commonly used to define records to be stored in files.Pointers and structures facilitate the formation of more complex data structures such as linked lists,queues,stacks and trees.

**Structure definitions**

Stuctures are derived data types - they are constructed using objects of other types. **_Example_**:

```
    struct card{
        char *face;
        char *suit;
   };
```

_Keyword Struct_ - Introduces structure definition.The identifier card is the _structure tag_, which names the structure definition and is used with the keyword struct to declare variables of the structure type.

_Members_ - Variable declared within the braces of the structure definition.Members of the same structure type must have unique names, but two different structures types may contain members of the same name without conflict.Each structure definition must end with a semicolon.

Definition of struct card contains two members of type char \*face and suit. Structure members can be variables of the primitve data types (e.g int, float, double etc.),of aggregates such as arrays and other structures.
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

Contains character array members for the first and last names, an int member for the employee's age, a char member that would contain 'M' or 'F' for the employee's gender and a double member for the employee's hourly salary.

A structure cannot contain an instance of itself.eg, a variable of type struct employee cannot be declared in the definition for struct employee. A pointer to struct employee, however, may be included.

_Self referential structure_ - A structure containing a member that is a pointer to the same structured type.Self referential structures are used to build linked data structures.

Structure definition do not reserve any space in memory,rather each definition creates a new data type that is used to define variables. Structure variables are defined like variables of other types. eg

```
struct card aCard, deck[52], *cardPtr;
```

declares aCard to be a variable of type struct card, declares deck to be an array with 52 elements of type struct card and declares cardPtr to be a pointer to struct card. Variables of a given structure type may also be declared by placing a comma seperated list of the variables between the closing brace of the structure definition and the semicolon that ends the structure defintion.

The only valid operations that may be performed on structures are the following:

-   Assigning structure variables to structure variables of the same type.
-   Taking the address (&) of a structure variable.
-   Accessing the members of a structure variable.
-   Using the size operator to determine the size of a structure variable.

**Initializing Structures**

Structures can be initialized using initializer lists as with arrays.To initialize a structure follow the variable name in the definition with an equals sign and a brace-enclosed, comma-seperated list of initializers. **_Example:_**

```
struct card aCard = {"Three", "Hearts"};
```

creates variable aCard to be of type struct card and initializes member face to "Three" and member suit to "Hearts". If there are fewer initializers in the list than members in the structure, the remaining members are automatically initialized to 0 (or NULL if the member is a pointer). Structure variables defined outside a function definition (i.e externally) are initialized to 0 or NULL if they are explicitly initialized in the external definition. Structure variables may also be initialized in assignment statements by assigning a structure variable of the same type, or by assigning values to the individual members of the structure.

**Accessing Members of Structures**

Two operators are used to access structures:

-   The _structure member operator_ (.) also called the _dot operator_.
-   The _structure pointer operator_ (->) also called the _arrow operator_.

The structure member operator accesses a structure member via the structure variable name. To print member suit of structure variable aCard, use the statement

```
printf("%s",aCard.suit);//displays "Hearts"
```

Structure pointer operator accesses a structure member via a pointer to the structure. Assume that the pointer cardPtr has been declared to point to struct card ans that the address aCard has been assigned to cardPtr. To print member suit of structure aCard with pointer cardPtr, use the statement

```
printf("%s",cardPtr->suit);//displays "Hearts"
```

The expression cardPtr->suit is equivalent to (_cardPtr).suit, which dereferences the pointer and accesses the member suit using the sutructure member operator. The parentheses are needed here because the structure member operator (.) has higher precedence than the dereferencing operator (_). The structure pointer operator and structure member operator, along with parentheses (for calling functions) and brackets ([]) used for array subscripting, have the highest operator precedence and associate from left to right.

**Using Structures with Functions**

Structures may be passed to functions by:

-   Passing individual structure members
-   Passing an entire structure or
-   Passing a pointer to a strucure

When structures or individual structure members are passed to a function, they are passed by value. Therefore, the members of a caller's structure cannot be modified by the called function.

To pass a structure by reference, pass the address of the structure variable. Arrays of structures like all other arrays are automatically passed by reference. Array could be passed by value using a structure.

To pass an array by value, create a structure with the array as a member. Structures ared passed by value, so the array is passed by value.

**_typedef_**

Provides a mechanism for creating synonyms (or aliases) for previously defined data types. Names for structure types ar often defined with typedef to create shorter type names. e.g

```
typedef struct card Card;
```

defines the new type name Card as a synonym for type struct card.

**Unions**
