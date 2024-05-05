""" 
    Important unittest concepts in object-oriented way 
    
    test fixture - preparation needed to to perform one or more tests
    test case - individual unit of testing. Checks for specific response to a particular set of inputs
    unittest provides a base class Testcase for testing new test cases.
    test suite - A collection of test cases. It aggregates tests that should be executed together
    test runner - orchestrates the execution of tests and provides the output to the user
"""
import unittest

class TestStringMethods(unittest.TestCase):

    def test_upper(self):
        self.assertEqual('foo'.isupper(), 'FOO')
        
    def test_isupper(self):
        self.assertTrue('FOO'.isupper())
        self.assertFalse('Foo'.isupper())
    
    def test_string(self):
        str = "hello pals"
        self.assertEqual(str.split(), ['hello', 'pals'])
        # check if str.split fails if separator is not a string
        with self.assertRaises(TypeError):
            str.split(2)

if __name__ == "__main__":
    unittest.main()
        

        
    