-- A script detailing sql injection
/*
 * SQL injection works on the fact of a specially crafted input from the attacker, is processed by the program which allows the input to exit the data context and enter a command context
*/

SELECT * FROM `students` WHERE name = 'Emma' AND age = 10;

-- The above query can be attacked with the following input 
-- name = ' or 1=1; --
-- The comment symbol (--) makes SQL ignore every single data or command after it.
-- If used, the above query becomes, ignoring everything after the comment

SELECT * FROM `students` WHERE nmae  '' or 1=1;
