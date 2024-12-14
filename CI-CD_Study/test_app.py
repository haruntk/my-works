import unittest
from app import greet  # app.py'den greet fonksiyonunu içe aktar

class TestGreetFunction(unittest.TestCase):
    def test_greet_with_name(self):
        # "World" girdiğinde, doğru çıktıyı döndürdüğünü test et
        self.assertEqual(greet("World"), "Hello, World!")

    def test_greet_with_empty_string(self):
        # Boş string girdiğinde, çıktıyı test et
        self.assertEqual(greet(""), "Hello, !")

    def test_greet_with_special_characters(self):
        # Özel karakterlerle çalıştığını test et
        self.assertEqual(greet("@user"), "Hello, @user!")

if __name__ == "__main__":
    unittest.main()
