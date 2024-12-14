import unittest
from app import greet

class TestApp(unittest.TestCase):
    def test_greet(self):
        self.assertEqual(greet("World"), "Hello, harung!")
        self.assertEqual(greet("Python"), "Hello, asd!")

if __name__ == "__main__":
    unittest.main()
