import unittest
from app import greet

class TestApp(unittest.TestCase):
    def test_greet(self):
        self.assertEqual(greet("World"), "Hello, harun!")
        self.assertEqual(greet("Python"), "Hello, Python!")

if __name__ == "__main__":
    unittest.main()
