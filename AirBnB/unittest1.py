import unittest
""" A test is created by subclassing unittest.TesttCase
    3 individual tests are defined. (Naming convention begins with test)
    The (test) naming convention informs the test runner which method represents a test.
    The crux of each test is a call to assertEqual() to check for an expected result;
    assertTrue() or assertFalse() to verify a condition;
    or assertRaises() to verify that a specific exception gets raised. These methods are used instead of the assert statement so the test runner can accumulate all test results and produce a report.
    setUp() and tearDown() is used to define instructions to be used before and after test methods
    Passing the -v option to your test script will instruct unittest.main() to enable a higher level of verbosity,
"""
class TestStringMethods(unittest.TestCase):
    def test_uppper(self):
        self.assertEqual('foo'.upper(), 'FOO')
        
    def test_isupper(self):
        self.assertTrue("FOO".isupper())
        self.assertFalse("Foo".isupper())
        
    def test_split(self):
        s = "Hello everyone"
        self.assertEqual(s.split(), ['Hello', 'everyone'])
        #checks if s.split is equal to a string
        with self.assertRaises(TypeError):
            s.split(2)
    

if __name__ == '__main__':
    unittest.main        