/* C Tokens
    In C programs, each word and punctuation is referred to as a token. C Tokens are the smallest building block or smallest unit of a C program. The compiler breaks a program into   the smallest possible units and proceeds to the various stages of the compilation, which is called token.

    C Supports Six Types of Tokens:
    * Identifiers
    * Keywords
    * Constants
    * Strings
    * Operators
    * Special Symbols

    -> Identifiers: Identifiers are names given to different entities such as constants, variables, structures, functions, etc.

    Example-
    int amount;
    double totalbalance;

    In the above example, amount and totalbalance are identifiers and int, and double are keywords.

    Rules For Naming Identifiers:
    * An identifier can only have alphanumeric characters (a-z , A-Z , 0-9) (i.e. letters & digits) and underscore( _ ) symbol.
    * Identifier names must be unique
    * The first character must be an alphabet or underscore.
    * You cannot use a keyword as identifiers.
    * Only the first thirty-one (31) characters are significant. It must not contain white spaces.
    * Identifiers are case-sensitive.

    -> Keywords: The C Keywords must be in your information because you can not use them as a variable name. You can't use a keyword as an identifier in your C programs, its reserved words in C library and used to perform an internal operation. The meaning and working of these keywords are already known to the compiler.

    C Keywords List(32): auto	double	int	 struct  break	else	long	switch  case	enum	register	typedef   char	extern	return	union   const	float	short	       unsigned   continue	for	signed	void  default	goto	sizeof	volatile   do	if	static	while

    -> Constants: Constants are like a variable, except that their value never changes during execution once defined. C Constants is the most fundamental and essential part of the    C programming language. Constants in C are the fixed values that are used in a program, and its value remains the same during the entire execution of the program.
     * Constants are also called literals.
     * Constants can be any of the data types.
     * It is considered best practice to define constants using only upper-case names.

    Syntax: const type constant_name;

    Primary Constant Types in C Language:
        (1) Numeric Constant - Integer(Decimal, Octal, Hexadecimal), Real
        (2) Character Constants - Single Character Constants, String Constants, Backslash Character Constants.
    Secondary Constant Types in C Language:
        (1) Array
        (2) Pointer
        (3) Structure
        (4) Union
        (5) Enum

    -> Operators: C operators are symbols that are used to perform mathematical or logical manipulations. The C programming language is rich with built-in operators. Operators take   part in a program for manipulating data and variables and form a part of the mathematical or logical expressions.

    Types of Operators in C Language:
        (1) Arithmetic Operators
        (2) Relational Operators
        (3) Logical Operators
        (4) Assignment Operators
        (5) Increment and Decrement Operators
        (6) Conditional Operator
        (7) Bitwise Operators
        (8) Special Operators

        Arithmetic Operators: + - * / %

        Relational Operators:
            ==	Is equal to
            !=	Is not equal to
            >	Greater than
            <	Less than
            >=	Greater than or equal to
            <=	Less than or equal to

        Logical Operators: And - &&, OR - ||, Not - !

        Assignment Operators:
            =	Assign
            +=	Increments then assign
            -=	Decrements then assign
            *=	Multiplies then assign
            /=	Divides then assign
            %=	Modulus then assign
            <<=	Left shift and assign
            >>=	Right shift and assign
            &=	Bitwise AND assign
            ^=	Bitwise exclusive OR and assign
            |=	Bitwise inclusive OR and assign
            
        Increment and Decrement Operators: Increment(++), Decrement(--)

        Conditional Operator: ?:

        Bitwise Operators:
            <<	Binary Left Shift Operator
            >>	Binary Right Shift Operator
            ~	Binary Ones Complement Operator
            &	Binary AND Operator
            ^	Binary XOR Operator
            |	Binary OR Operator

        Special Operators:
            sizeof()	 Returns the size of a memory location.
            &	         Returns the address of a memory location.
            *	         Pointer to a variable.
*/